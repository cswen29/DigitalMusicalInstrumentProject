# Developer Manual

## Gen 1 Bill of Materials
| Name | Distributor |Quantity | Price |
| ----- | -------- |  ----- |----- |
| USB C to Micro B Cable - 3 ft 1 meter | Adafruit | 1 | $3.50 |
| Ultrasonic Distance Sensor - 3V or 5V - RCWL-1601 | Adafruit | 1 | $3.95 |
| Premium Male/Male Jumper Wires - 20 x 3" | Adafruit | 1 | $1.95 |
| Breadboard 400 Tie Point Solderless Prototype PCB Board Protoboard | Amazon |1 | $2.00 |
| Zig Sim Pro | Apple Store | 1 | $3.99 |
| Teensy 4.0 | PJRC | 1 | $23.80 |


## Gen 1 Implementation
### Gestures
Currently, the hand holding the phone running Zig Sim Pro captures your quaternion gestures with roll, pitch and yaw. Pitch and high pass filter are both being controlled by Roll. More will be implemented soon!  

### Sensors
I considered several sensors, the main data needed was distance and quaternion, so I thought of photo depth sensors, ultrasonic sensors and infrared sensors. In the end I chose ultrasonic just because I had it with me and also it was cheaper and it works for the prototype as of now. It achieves the desired effect, capturing distance between my laptop and phone.

### Data Processing and Interpolation Curves
Main calculations were done in MaxMSP, ultrasonic distance data was calculated in Arduino, the code can be found [here](/Media/WC_Ultrasonic_Sensor.ino). 

Quaternion and acceleration data from Zig Sim is pre-processed with the gen object in the Max patch found [here](/Media/Motion_PreprocessingAndNetworkingWithZigSim.maxpat). 

Ultrasonic values were then scaled to fit the desired volume attenuation I wanetd in Max and Quaternion data were also scaled to pitch Hz values and high pass filter cutoff/gain values I wanted. 

### What was successful
All current sensors work as intended, electricity sounds are heard when you put both devices close together. pitch and filter moves smoothly with the roll of the phone. 

What needs improvement
- Rolling average to eliminate noise
- sliding values in volume randomization 
- More gestures , more sounds!

### Future Development Plans 
Explore bluetooth options, maybe even speakers built into them or the option to switch different ouputs. 

Fire magical sounds, make electrical sounds more ceremonial. A way to switch sounds remotely. 

3D printing of orbs, way to balance the weight or them, how it will be like if rolling on the floor or throwing!  

Have the orbs be mappable in space for visuals, either projector mapping or VR animations, best for cosplayers! 