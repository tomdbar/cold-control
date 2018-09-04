%% The following script demonstrates how to create the sequence
%  with a wx2182 waveform generator at IP address 192.168.0.185,
%  using the wx218x IVI driver. 
%
%  Author: Irina Tseitlin
%  email:  support@taborelec.com
%
%  Copyright (C) 2011-2014 Tabor Electronics Ltd

ACTIVE_CHANNEL = 'Channel1';

% Open connection to instrument with IP address
dev = icdevice('wx218x_IVI_C_64bit.mdd', 'TCPIP0::192.168.0.178::5025::SOCKET','optionstring','Simulate=false');

try
  connect(dev);

  % Reset device
  groupCnf = get(dev, 'Utility');
  invoke(groupCnf, 'reset');
  
  % Set the sample clock
  groupArb = get(dev, 'Instrumentspecificarbitrary');
  groupArb.Sample_Rate = 80E6;


  % Create three segments in the channel A and load waves in them 
  groupArb = get(dev, 'Instrumentspecificarbitrarywaveform');
  wavesdir = [pwd '\waves\'];
  
   %Getting model name
  groupIdn = get(dev, 'Inherentiviattributesinstrumentidentification');
  szModel = groupIdn.Instrument_Model;
  
  
  %Doing this only for WX2184 or WX1284
  if (((strcmp(szModel, 'WX2184')) == 1) || ((strcmp(szModel, 'WX1284')) == 1) || ((strcmp(szModel, 'WX2184C')) == 1) || ((strcmp(szModel, 'WX1284C')) == 1))  
    groupArb.Trace_Mode = 2;   % Duplicate
  end;
  
  
  wfmHandle1 = invoke(groupArb, 'loadarbwfmfromfile', ACTIVE_CHANNEL, 512,[wavesdir 'pulse_2048.wav']);
  wfmHandle2 = invoke(groupArb, 'loadarbwfmfromfile', ACTIVE_CHANNEL, 512,[wavesdir 'sinc_8192.wav']);
  wfmHandle3 = invoke(groupArb, 'loadarbwfmfromfile', ACTIVE_CHANNEL, 512,[wavesdir 'square_1024.wav']);

  wfmHandles = [wfmHandle1 wfmHandle2 wfmHandle3];   
 

  % Create the sequence in the active channel, currently the active
  % channel is Out1 because the 'LoadArbWfmFromFile' function used with 'Channel1'
  % parameter 
  % Sequence Description:
  %  Step #              Segment #               Repeats Count  Jump Flag
  %  [ 1 ]    [ Segment 1 ( pulse_2048.wav )]         [ 2 ]     [ 0 ]
  %  [ 2 ]    [ Segment 2 ( sinc_8192.wav ) ]         [ 3 ]     [ 0 ]
  %  [ 3 ]    [ Segment 3 ( square_1024.wav )]    [ 1 ]     [ 0 ]
  %
  groupArb = get(dev, 'Instrumentspecificarbitrarysequence');
  seqHandle = invoke(groupArb, 'createsequenceadv', 3, wfmHandles, 3, [2,3,1], 3, [0,0,0]);
    

  % Create the sequence in the active channel, currently the active
  groupOutput = get(dev, 'Output');
  
  % Standard - 0
  % Arbitrary - 1
  % Sequence - 2
  % ASequence - 3
  % Modulation - 4
  % DPulse - 5
  

  % set the Output Mode to Sequence 
  groupOutput.Output_Mode = 2;
  
  % Output enable
 groupOutput1 = get(dev, 'Configurationgeneral');
 invoke(groupOutput1, 'configureoutputenabled', ACTIVE_CHANNEL, 1)

 % Close the connection with instrument
  disconnect(dev);
  delete(dev);
catch aException
  disp(aException.message);
   % Close the connection with instrument
  disconnect(dev);
  delete(dev);   
end