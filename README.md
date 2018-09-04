# cold-control

This is the GUI used to control all aspects of the atomic cavity-QED physics experiments in out lab.  These styles of experiment tend to invlove many different instruments, all of which need to be managed in a coherent way. The aim of this GUI is to provide an intuative interface to this system, where the user can focus on the desired experiment(s) without having to explicity consider how this is implemented on a hardware level.  This repository of course serves as a resource for myself and future group members to extend this work, but unfortunately an outside user can not expect to simply plug-and-play the GUI as it is specifically tailored to the set-up we have.  That said, if anyone has stumbled upon this when looking to implement some of the contained functionality into their own set-up, I would hope that the modular nature of the code is such that this can provide a reasonable starting point.

For a flavor of the work this underpins see the [Atom-Photon connection group website](https://www2.physics.ox.ac.uk/research/the-atom-photon-connection) or the specific work this experiment has produced can be found in the follwing publications:
  - [Nonlinear Zeeman Effects in the Cavity-Enhanced Emission of Polarised Photons](http://iopscience.iop.org/article/10.1088/1367-2630/aad14e)
  - [Atom-Photon Coupling in Birefringent Fabry-Perot Cavities](https://arxiv.org/abs/1807.07633)
  - [Multimode interferometry for entangling atoms in quantum networks](https://arxiv.org/abs/1803.10222)

# Overview of the functionality

The below is not an exhaustive list and neglects most specfics, however it hopefully provides a pointer to the relevant code underlying the core functionality provided by cold-control.

  - A TkInter based interface for the experiment is run from [Root_UI](Root_UI.py).
  - DAQ cards write static voltages and play preceisely timed sequences to execute the experiment.  To this end the [DAQ](DAQ.py) (for the hardware interface) and [DAQ_UI](DAQ_UI.py) (for the GUI interface) modules contain the functionality to synchronise and control multiple ADLINK-2502 DAQ cards.  A calibration between these voltages and the functionality they control is also supported - for example an acousto-optic modulator (AOM) that controls the power and frequecny of a given laser-line is far better interfaced with by requesting the desired power and frequency, rather than manually chaging the voltage that drives it.  [Calibration.py](Calibration.py) is separate from the GUI and provides some simple scripts to generate the required calibration files, using the readout of a ThorlabsPM100 power-meter, for AOMs driven by either the arbitrary waveform generator (AWG) or the DAQ cards
  - The data handling and an interface for custom sequences played on the DAQ cards to control a given experimental run are provided by [Sequence](Sequence.py) and [Sequence_UI](Sequence_UI.py).
  - Controlling all other aspects of the experimental run (automated staging of multiple experiments, data aquisition, on-the-fly analysis etc) are provided by the [ExperimentalRunner](ExperimentalRunner.py) and [Experimental_UI](Experimental_UI.py).
  - The camera used to view the experiment and take absorbition images of the atomic cloud is viewed through the [Camera_UI](Camera_UI.py).
  - The [instruments](instruments) folder contains python wrappers to talk to various devices including:
    - [Tarbor Electronics WX218x AWG](instruments/WX218x)
    - [IC Imaging Control camera](instruments/pyicic)
    - [qutools quTAU TDC](instruments/quTAU) 
    - [ThorlabsPM100 powermeter](instruments/ThorlabsPM100)
    - [TF930 frequency counter](instruments/TF930)
    - Other instruments in this folder are not currently integrated with cold-control, however some work has been done on proving a wrapper for doing so and this is included.
