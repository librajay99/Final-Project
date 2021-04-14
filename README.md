# Final-Project
Topic : Home Management System

 
INTRODUCTION
The Home Management System is the focus of this initiative.Home Management System is a simple way to manage and track various gadgets and appliances that we use on a daily basis in our homes. Holding lights, air conditioning, garage doors, surveillance cameras, motion monitors, Security management systems are all examples of these.
The aim of this project is to take wired appliances and attach them to a bluetooth module on an Android phone.On your Android smartphone, you must download an app; this app is no longer available on the Play Store, so I will attach a link to download it. This project calls for an Grove BLE(dual model), but I didn’t get one, so I used a BLE Grove Dual model, which you can connect to your Android phone.



Repository Contents:
a)	Circuit build :

 
![Screenshot (42)](https://user-images.githubusercontent.com/79684855/114685314-fc003480-9cce-11eb-8c06-703d2ee3584c.png)




b)	First Build Circuit:


  
![image0 (2)](https://user-images.githubusercontent.com/79684855/114685399-0b7f7d80-9ccf-11eb-8acd-1625f879811d.jpg)



REQUIREMENTS AND MATERIALS
The libraries and hardware that were used in this project are listed here. Dependencies:

Bill of Materials:
•	Arduino Uno   https://solarbotics.com/product/50450/
•	An Android Phone or tablet
•	5V Relay Board  https://solarbotics.com/product/52266/
•	Grove- BLE (dual model)  https://solarbotics.com/product/29156/
•	Bulb and sockets 
•	Breadboard
•	Neutral wire/ Earth wire
•	Jumper wires   https://solarbotics.com/product/45037/
•	LED’S

BUILD INSTRUCTIONS
What software do you need?
•	First you have to download, Install and Setup Arduino IDE 
Now you need to install an app on your Android phone to connect with the Bluetooth. Since the app isn’t available on PlayStore, you’ll need to download the Android app from the link below.
-https://goo.gl/7P1St1

Connections:

Connecting the Arduino to the Grove- BLE(dual model)?
•	You have to first connect the Arduino’s +5V and GND pins to the breadboard. Now you need to connect the 5V and GND pins of the Grove – BLE (dual model) to the bus strips on the breadboard to power it. After that, you need to connect the RXD pin (Pin 0) on the Arduino to the TXD pin on the Grove- BLE(dual model). Finally, The TXD pin on the Arduino must now be connected to the RXD pin on      the Grove- BLE(dual model).
Connecting the Arduino to the relay module?
•	Attach the relay module’s 5V and GND pins to the breadboard. Now, PIN on the Arduino is connected to the relay module. The load must now be connected to the relay module.

USAGE
Uploading the code?
•	Connect the Arduino to your device via USB port and launch the Arduino IDE to upload the code. Then, create a new file in it. In a new file, copy the sketch and save it. Now, run the code on your Arduino.
Using your Android smartphone to control the light bulb?
•	First connect the Bluetooth with your Android device. Now you must launch the app on your device. You can now control the bulb in the app by simply clicking on the ON/OFF switch.

TEAM:
->JAY JARIWALA: I did the coding, built the circuit and wrote half of the Read Me file.
-> MOHAMAD SAAD SHAIKH: Built the circuit and wrote the other half of the Read Me file.

CREDITS:
	HARSH SHARMA TECHNICALS = For third party android application link and source code for the circuit. 
 https://goo.gl/i2JdjU


 
 
 
 

