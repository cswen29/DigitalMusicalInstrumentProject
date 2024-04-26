# Getting Started
## Gen 1 Apr 24 Update

### Installation
Here are the softwares and libraries you will need to get started:
Arduino IDE 
- Teensy (for Arduino IDE 2.0.4 or later) in Boards Manager
MaxMSP
Zig Sim Pro in Apple Store 

### Breadboard setup
Here is the [fritzing file](/Media/Serial01_Ultrasonic.fzz)

![](/Media/Ultrasonic_Fritz.png)

Then, connect the USB-C into your laptop 

### Initializing
Run Arduino IDE. open up [this file](/Media/WC_Ultrasonic_Sensor.ino), on the top left, click compile/run. Once done, you may check if the sensor is working through the serial monitor. If it works, there will be lines printed in the console stating the distance value from the ultrasonic sensor. Close it when done.

Now open Max with [this patch](/Media/Motion_PreprocessingAndNetworkingWithZigSim.maxpat), it should open in presentation mode. First, check your audio status from 'Options' in the navigation bar. To confirm it is on and set to the output you like. 

Turn the toggle on screen on and it should initialize the patch. Start bringing your hands or anything close to the sensor. Sound should be coming out. 

Lastly, for Zig Sim Pro. Have the app open on your phone, go into settings, this is the details you need to fill in
![](/Media/ZigSimPro_Settings.jpeg)

The only change you need to make is the IP Address, it has to be the one from your laptop which you can usually get through wifi settings details -> IP Adress. 

### Simple How to play 
Once you get audio running, you can start moving your phone close to the ultrasonic sensor and move your phone around with your wrist. Here is the [User Manual](/Proposal/UserManual.md)!

