## 23 April devlog
Instead of 2 physical separate sensors in hand with speakers between each other, I decided to use my phone and laptop.

The laptop is staionery. The phone acts as the movement capture sensor, with ZigSim(Pro) communicating with a [Max patch](/Media/Motion_PreprocessingAndNetworkingWithZigSim.maxpat). 

The laptop will generate sound through synthesis within Max. Here is a draft of my electricity synthesis in Max ![](/Media/WC_Electricity_Max_Patch.png) It is pretty simple, I start off with a square wave and modulate them with a sine and a random square wave with low frequency to get the stutter effect. I then use a high pass filter to create movement and lastly, I randomized the volume levels in both the left and right output.  

Right now, everything is set to randomize. I will change the parameters to be controlled by the movement of my phone, either the acceleration or quaternion values! 



## 24 April devlog
Today, I incorporated the ultrasonic sensor to calculate distance between my phone and laptop. 
I took away some of the random parameters and used scale ojects to optimize my gestures of my phone towards the sensor. 

I would likely 3D print an orb to cover the breadboard just to make it seem ceremonial! 

This is my update from yesterday: ![](/Media/WC_Electricity_MP_Update.png)

Now, I have the ultrasonic distance hooked up onto the main volume, so as you get close to it it will make electricity sounds, this was a pretty funny change because for the current sound design, it sounds like you get shocked when you get close to it! 

With ZigSimPro, I send the quaternion Roll values to shift both pitch and highpass filter, so it will almost look like you're playing an accordion, only that one hand does more gestures... 

I kind of wish that the random values of the volume could slide towards each other but right now this works (just jumping from values to values...) [like a slew? line~?] 

