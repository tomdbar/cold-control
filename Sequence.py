'''
Created on 10 Apr 2016

@author: Tom Barrett
'''

import numpy as np

class Sequence(object):
    '''
    A class containing all the information needed to create a sequence for multiple DAQ channel.
    
    Note t_step is in microseconds
    '''
    def __init__(self, n_samples, t_step=1):
        self.n_samples = n_samples
        self.chSeqs = {}
        self.t_step = t_step
        
    def getArray(self):
        '''Return the sequence as a numpy array of all channels'''
        return np.asarray([self.chSeqs[chNum].getValArray() for chNum in self.getChannelNums()])
        
    def getLength(self):
        return (self.n_samples - 1) * self.t_step
    
    def getTimeSteps(self):
        return np.linspace(0.0, self.getLength(), self.n_samples)
    
    def addChannelSeq(self, chNum, tV_pairs={0.:0.}, V_intervalStyles=[]):
        self.chSeqs[chNum] = _ChannelSequence(self, tV_pairs, V_intervalStyles)
        
    def getChannelNums(self):
        return sorted(self.chSeqs.keys(), key=lambda x:int(x))
        
    def getChannelValArray(self, chNum):
        return self.chSeqs[chNum].getValArray()
    
    def getChannelValuesAtTime(self, t, chNums=None):
        '''
        Returns a list of the value of channels at a specified time, ordered as provided in chNums.
        The values are returned in the form: [[val1],[val2],[val3],...].
            t - the time (in microseconds) after the start of the sequence to get channel values at
            chNum - a list of channel numbers. If None returns all channels
        '''
        if t<0 or t > self.getLength():
            raise ValueError('t must be within the sequence duration: 0 <= t <= (n_samples-1)*t_step')
        if chNums == None:
            chNums = self.getChannelNums()
        col = int(np.floor(t / self.t_step))
        
        return np.array( [[chArr[col]] for chArr in [self.getChannelValArray(n) for n in chNums]] )
    
    def get_tV_pairs(self, chNum):
        return self.chSeqs[chNum].tV_pairs
    
    def get_V_intervalStyles(self, chNum):
        return self.chSeqs[chNum].V_interval_styles
        
    def updateChannel(self, chNum, tV_pairs, V_interval_styles):
        channel = self.chSeqs[chNum]
        old_tV_pairs, old_V_interval_styles = channel.tV_pairs, channel.V_interval_styles
        try:
            channel.tV_pairs, channel.V_interval_styles = zip(*sorted(zip(tV_pairs,V_interval_styles), key=lambda x: x[0][0]))
            channel.validate()
        except InvalidSequenceChannelException as err:
            channel.tV_pairs = old_tV_pairs
            channel.V_interval_styles = old_V_interval_styles
            raise err
        
    def updateTimeSteps(self, n_samples, t_step, channelsToUpdate={}):
        '''Update the sequence level variables.  Takes an optional dictionary of changes to make
        to individual channels before validate the sequence in the form:
            key = channel number
            value = (tV_pairs, V_interval_styles)'''
        # Store origional values for reverting to then change to new values.
        old_n_samples, old_t_step = self.n_samples, self.t_step
        self.n_samples = n_samples
        self.t_step = t_step
        
        validationErrors = []
        errorChannels = []
        
        # For each channel, apply any changes as provided in channelsToUpdate, then validate each channel.
        for chNum in self.chSeqs:
            
            try:
                # Update the channel (if required) and validate - note validate is called in self.updateChannel
                # so it is only explicitly called here if no updates were required.
                if chNum in channelsToUpdate:
                    self.updateChannel(chNum, channelsToUpdate[chNum][0], channelsToUpdate[chNum][1])
                else:
                    self.chSeqs[chNum].validate()
                
            # revert changes if validation threw errors, store these errors to be raised en-masse later.
            except InvalidSequenceChannelException as err:
                self.n_samples = old_n_samples
                self.t_step = old_t_step
                validationErrors.append(err)
                errorChannels.append(chNum)
                
        # If there were validation errors raise them now.
        if validationErrors != []:
            raise MultipleInvalidSequenceChannelException(
                    '{0} validation errors were found when updating the sequence'.format(len(validationErrors)),
                    errors = validationErrors,
                    errorChannels = errorChannels)

class _ChannelSequence(object):
    '''
    A class containing all the information needed to create a sequence for one DAQ channel.
    '''
    def __init__(self, parentSequence, tV_pairs=[(0.,0.)], V_intervalStyles=[]):     
        self.parent = parentSequence
        self.tV_pairs, self.V_interval_styles = zip(*sorted(zip(tV_pairs,V_intervalStyles), key=lambda x: x[0][0]))
        self.validate()
        
    def getValArray(self):
        t_span = self.parent.getTimeSteps()                
        V_span = np.array([],dtype=np.float)
        numIntervals = len(self.V_interval_styles)
#         
#         if numIntervals == 1:
#             # If there is only one interval it's just a constant value for the whole sequence.
#             (t_0, V_0) = self.tV_pairs[0]
#             (t_1, V_1) = self.parent.getTimeSteps()[-1], V_0
#             changeStyle = self.V_interval_styles[0]
# 
#             changeFunc = self.getChangeFunc(changeStyle, (t_0, V_0), (t_1, V_1))                    
#             V_span = np.append(V_span, map(changeFunc, t_span))
#             
#         else:
        for i in range(0, numIntervals):
            (t_0, V_0) = self.tV_pairs[i]
            try: 
                (t_1, V_1) = self.tV_pairs[i + 1]
            except IndexError as err:
                # If there is an index error tHis could be because we are on the final sequence interval.
                if i == numIntervals - 1 and self.V_interval_styles[i] == IntervalStyle.FLAT:
                    # If we are, and the final interval style is Flat then we know the final voltage.
                    (t_1, V_1) = t_span[-1], V_0
                else:
                    # Otherwise I don't know why it broke so I'm throwing the error back!
                    raise err
            changeStyle = self.V_interval_styles[i]
            
            t_interval = [t for t in t_span if t_0 <= t <= t_1] if i == numIntervals - 1 else [t for t in t_span if t_0 <= t < t_1]        
            
            # Note we use t_interval[0] and t_interval[1] rather than t_0 and t_1.  This is because he function fits expected values
            # between the time points provided - so if t_0 and t_1 are not in t_span then some unwanted values will be set!
            
            try:            
                changeFunc = self.getChangeFunc(changeStyle , (t_interval[0], V_0), (t_interval[-1], V_1))                    
                V_span = np.append(V_span, map(changeFunc, t_interval))
            except IndexError:
                # If t_interval is an empty list wel'll catch that here - it just means that t_0 and t_1
                # are so close together (or identical) so no times in t_span are between them.  The card
                # can't update that quick so there is nothing to add to V_span anyway.
                pass
                
        return V_span
    
    def getChangeFunc(self, style, (t_0,V_0), (t_1,V_1)):
        if style == IntervalStyle.FLAT:
            ''' TODO - MAKE PIECEWISE?'''
            return lambda t: V_0
        if style == IntervalStyle.RAMP:
            return lambda t: ((V_1 - V_0)/(t_1 - t_0))*(t-t_0) + V_0
        
    def validate(self):
        '''Validate the sequence information provided for consistency with itself and the parent sequence.'''
        if len(self.tV_pairs) == len(self.V_interval_styles) + 1 and self.tV_pairs[-1][0] != self.parent.getTimeSteps()[-1]:
            raise InvalidSequenceChannelException("Sequence validation error: If {0} time-voltage pairs and {1} styles of how to move between them are provided - the last time must be the final data point of the sequence ({2}).".format(len(self.tV_pairs), len(self.V_interval_styles), self.parent.getTimeSteps()[-1]))
        
        elif len(self.tV_pairs) == len(self.V_interval_styles):
            if self.tV_pairs[-1][0] >= self.parent.getTimeSteps()[-1]:
                raise InvalidSequenceChannelException("Sequence validation error: If the same number of time-voltage pairs and interval styles ({0}) are provided - the final time provided must be before the end of the sequence length..".format(len(self.tV_pairs)))
            elif self.V_interval_styles[-1] != IntervalStyle.FLAT:
                raise InvalidSequenceChannelException("Sequence validation error: If the same number of time-voltage pairs and interval styles ({0}) are provided - the final interval style must be Flat.".format(len(self.tV_pairs)))
        
        elif len(self.tV_pairs) != len(self.V_interval_styles) and len(self.tV_pairs) != len(self.V_interval_styles) + 1:
            raise InvalidSequenceChannelException("Sequence validation error: If is not possible to create a sequence out from {0} time-voltage pairs and {1} interval styles.".format(len(self.tV_pairs), len(self.V_interval_styles)))

        if int(self.tV_pairs[0][0]) != 0:
            raise InvalidSequenceChannelException("Every channels sequence must begin at t=0 (here t={0} is the first time provided).".format(self.tV_pairs[0][0]))
        
        if self. tV_pairs[-1][0] > self.parent.getLength():
            raise InvalidSequenceChannelException("A channel sequence cannot be created with a time-voltage pair ({0}) outside the total running time of it's parent sequence ({1})".format(self. tV_pairs[-1],self.parent.getLength()))

class InvalidSequenceChannelException(Exception):
    def __init__(self, message, errors=[]):

        # Call the base class constructor with the parameters it needs
        super(InvalidSequenceChannelException, self).__init__(message)
        self.errors = errors
        
class MultipleInvalidSequenceChannelException(Exception):
    def __init__(self, message, errors=[], errorChannels=[]):

        # Call the base class constructor with the parameters it needs
        super(MultipleInvalidSequenceChannelException, self).__init__(message)
        self.errors = errors
        self.errorChannels = errorChannels
                            
class IntervalStyle:
    FLAT, RAMP = range(2)
    
    @classmethod
    def toString(cls, val):
        for k,v in vars(cls).iteritems():
            if v==val:
                return k.title()

    @classmethod
    def fromString(cls, str):
        return getattr(cls, str.upper(), None)
    
    @classmethod
    def getAll(cls):
        return [x.title() for x in dir(cls) if not isinstance(cls.__dict__[x], classmethod) and not x.startswith("__")]
        
