'''
Created on 11 Apr 2016

@author: Tom Barrett
'''

import Tkinter as tk

class TextExtension(tk.LabelFrame):
    """Extends Frame.  Intended as a container for a Text field.  Better related data handling
    and has Y scrollbar now."""


    def __init__( self, master, textvariable = None, *args, **kwargs ):
        tk.LabelFrame.__init__(self, master, *args, **kwargs)
        
        
        self.textvariable = textvariable
        if ( textvariable is not None ):
            if not ( isinstance( textvariable, tk.Variable ) ):
                raise TypeError( "tk.Variable type expected, {} given.".format( type( textvariable ) ) )
            self.textvariable.get = self.getText
            self.textvariable.set = self.setText

        # build
        self.YScrollbar = None
        self.Text = None

        self.YScrollbar = tk.Scrollbar( self, orient = tk.VERTICAL )

        self.Text = tk.Text( self, yscrollcommand = self.YScrollbar.set )
        self.YScrollbar.config( command = self.Text.yview )
        self.YScrollbar.pack( side = tk.RIGHT, fill = tk.Y )
        
        self.Text.pack( side = tk.LEFT, fill = tk.BOTH, expand = 1 )


    def clear( self ):
        self.Text.delete( 1.0, tk.END )


    def getText( self ):
        text = self.Text.get( 1.0, tk.END )
        if ( text is not None ):
            text = text.strip()
        if ( text == "" ):
            text = None
        return text


    def setText( self, value ):
        self.clear()
        if ( value is not None ):
            self.Text.insert(tk.END, value.strip() )