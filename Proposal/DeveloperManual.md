## 23 April devlog
Instead of 2 physical separate sensors in hand with speakers between each other, I decided to use my phone and laptop.

The laptop is staionery. The phone acts as the movement capture sensor, with ZigSim(Pro) communicating with a [Max patch](/Media/Motion_PreprocessingAndNetworkingWithZigSim.maxpat). 

The laptop will generate sound through synthesis within Max. Here is a draft of my electricity synthesis in Max ![](/Media/WC_Electricity_Max_Patch.png) 

Right now, everything is set to randomize. I will change the parameters to be controlled by the movement of my phone, either the acceleration or quaternion values! 