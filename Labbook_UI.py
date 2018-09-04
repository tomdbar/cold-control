'''
Created on 25 Mar 2016

@author: tombarrett
'''
import Tkinter as tk
import ttk
import ScrolledText
import os
import re
import time
from PIL import Image, ImageTk

class Labbook_UI(tk.LabelFrame):

    def __init__(self, parent, labbook_dir = os.path.join(os.getcwd(),'labbook'), text="Labbook", fExt = '.txt',
                 font=("Helvetica", 16), **kwargs):
        tk.LabelFrame.__init__(self, parent, text=text, font=font, **kwargs)
        
        self.parent = parent
        
        self.textWid = ScrolledText.ScrolledText(self)
        
        self.labbook_dir = labbook_dir
        self.fExt = fExt
        
        r = re.compile('\d{1,2}-\d{1,2}-\d{2,4}.*' + self.fExt)
        self.dropdownOptions = self.sortDates([y.group() for y in [r.match(x) for x in os.listdir(self.labbook_dir)] if y is not None])
        self.dropdownVar = tk.StringVar()
        
        self.configureForCurrentDate()
        
        topFrame = tk.Frame(self)

        self.dropdown = ttk.OptionMenu(topFrame, self.dropdownVar, self.dropdownVar.get(), *self.dropdownOptions,
                                       command=lambda x: self.labbookSelected(self.dropdownVar),
                                       style='Files.TMenubutton')

        icon = Image.open("icons/refresh_icon.png").resize((20,20))
        icon = ImageTk.PhotoImage(icon)
        self.refreshButton = tk.Button(topFrame, image=icon, command=self.configureForCurrentDate, height=20, width=20)
        self.refreshButton.image = icon # store the image as a variable in the widget to prevent garbage collection.
        
        self.dropdown.pack(side=tk.LEFT)
        self.refreshButton.pack(side=tk.RIGHT)
        
        topFrame.pack(side=tk.TOP, fill=tk.X, padx=15, pady=5)
        self.textWid.pack(expand=1)
        
    def configureForCurrentDate(self):
        self.fname = ''
        for fname in [time.strftime("%d-%m-%y") + self.fExt, time.strftime("%d-%m-%Y") + self.fExt]:
            if fname in self.dropdownOptions:
                self.dropdownVar.set(fname)
                self.fname = os.path.join(self.labbook_dir, fname)
                break
        if self.fname == '':
            self.dropdownOptions.insert(0, time.strftime("%d-%m-%y") + self.fExt)
            self.dropdownVar.set(self.dropdownOptions[0])
            self.fname = os.path.join(self.labbook_dir, time.strftime("%d-%m-%y") + self.fExt)
            # File doesn't exist so let's make it!
            open(self.fname, 'a').close()
            
        self.open()
        self.autosave()
        
    def labbookSelected(self, dropdownVar):
        self.write()
        self.fname = os.path.join(self.labbook_dir, dropdownVar.get())
        self.open()
        
    def open(self):
        f = open(self.fname, 'r')
        print 'open: ', self.fname
        self.textWid.delete(1.0, tk.END)
        self.textWid.insert(tk.END, f.read())
        f.close()

    def write(self):
        f = open(self.fname, 'w')
        print 'write: ', self.fname
        f.write(self.textWid.get('1.0', tk.END))
        f.close()
        
    def autosave(self):
        '''Register a write event to save the labbook every 5 minutes'''
        self.write()
        self.after(300000, self.autosave)
        
    def sortDates(self, dateFiles):
        '''Takes a list of date files as strings of the form dd-mm-yy.txt or dd-mm-yyyy.txt
           and sorts them (earliest to latest)'''
        def sorting(L):
            split = L.split('.')[0].split('-')
            return split[2][-2:], split[1], split[0]

        dateFiles.sort(key=sorting, reverse=True)
        return dateFiles