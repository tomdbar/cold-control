'''
Created on 10 Apr 2016

@author: Tom Barrett
'''

import Tkinter as tk

class ToolTip(object):

    def __init__(self, widget, text, openDelay=2000):
        self.widget = widget
        self.tipwindow = None
        self.id = None
        self.text = text
        self.openDelay = openDelay
        self.x = self.y = 0
        
    def updateText(self, text):
        self.text=text
        
    def spawntip(self):
        self.id = self.widget.after(self.openDelay, self.showtip)

    def showtip(self):
        '''Display text in tooltip window'''
        if self.tipwindow or not self.text:
            return
        x, y, cx, cy = self.widget.bbox("insert")
        x = x + self.widget.winfo_rootx() + 27
        y = y + cy + self.widget.winfo_rooty() +27
        self.tipwindow = tw = tk.Toplevel(self.widget)
        tw.wm_overrideredirect(1)
        tw.wm_geometry("+%d+%d" % (x, y))
        try:
            # For Mac OS
            tw.tk.call("::tk::unsupported::MacWindowStyle",
                       "style", tw._w,
                       "help", "noActivates")
        except tk.TclError:
            pass
        label = tk.Label(tw, text=self.text, justify=tk.LEFT,
                      background="#ffffe0", relief=tk.SOLID, borderwidth=1,
                      font=("tahoma", "8", "normal"))
        label.pack(ipadx=1)

    def hidetip(self):
        try:
            self.widget.after_cancel(self.id)
        except: pass
        finally:
            tw = self.tipwindow
            self.tipwindow = None
            if tw:
                tw.destroy()

  
def createToolTip(widget, text, openDelay=1000):
        toolTip = ToolTip(widget, text, openDelay)
        def enter(event):
            toolTip.spawntip()
        def leave(event):
            toolTip.hidetip()
        widget.bind('<Enter>', enter)
        widget.bind('<Leave>', leave)
        return toolTip