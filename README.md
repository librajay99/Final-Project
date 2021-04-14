# Final-Project
Topic : Home Management System

INTRODUCTION
 The Home Management System is the focus of this initiative.Home Management System is a simple way to manage and track various gadgets and appliances that we use on a daily basis in our homes. Holding lights, air conditioning, garage doors, surveillance cameras, motion monitors, Security management systems are all examples of these. 
 
 The aim of this project is to take wired appliances and attach them to a bluetooth module on an Android phone.On your Android smartphone, you must download an app; this app is no longer available on the Play Store, so I will attach a link to download it.
 This project calls for an HC-05 bluetooth module, but I didn't get one, so I used a BLE Grove Dual model, which you can connect to your Android phone. 
 
 Requirements and Materials
 
 Bill of Materials:
 Arduino Uno

 An Android Phone or tab
 A WiFi network
 
 
 
 

INTRODUCTION
The Home Management System is the focus of this initiative.Home Management System is a simple way to manage and track various gadgets and appliances that we use on a daily basis in our homes. Holding lights, air conditioning, garage doors, surveillance cameras, motion monitors, Security management systems are all examples of these.
The aim of this project is to take wired appliances and attach them to a bluetooth module on an Android phone.On your Android smartphone, you must download an app; this app is no longer available on the Play Store, so I will attach a link to download it. This project calls for an HC-05 bluetooth module, but I didn’t get one, so I used a BLE Grove Dual model, which you can connect to your Android phone.

REQUIREMENTS AND MATERIALS
The libraries and hardware that were used in this project are listed here. Dependencies:
•
Bill of Materials:
•Arduino Uno
•An Android Phone or tab A WiFi network
•Relay
•HC 05 Wireless Bluetooth Module
•Bulb
•2.2k ohm resistor
•1k ohm resistor
•Breadboard
•Jumper wires

BUILD INSTRUCTIONS
What software do you need?
•First you have to download, Install and Setup Arduino IDE.

•Now you need to install a app on your Android phone to conect with the Bluetooth. Since the app isn’t accessible on PlayStore, you’ll need to download the Android app from the link below.
-https://goo.gl/7P1St1

Connections:

Connecting the Arduino to the Bluetooth HC-05?
•You have to first connect the Arduino’s +5V and GND pins to the breadboard. Now you need to connect the 5V and GND pins of the HC-05 module to the bus strips on the breadboard to power it. After that, you need to connect the RXD pin (Pin 0) on the Arduino to the TXD pin on the HC-05 module. Finally, The TXD pin on the Arduino must now be connected to the RXD pin on the HC-05.
Connecting the Arduino to the relay module?
•Attach the relay module’s 5V and GND pins to the breadboard. Now, PIN on the Arduino is connected to the relay module. The load must now be connected to the relay module.

USAGE
Uploading the code?
•Connect the Arduino to your device via USB port and launch the Arduino IDE to upload the code. Then, create a new file in it. In a new file, copy the sketch and save it. Now, run the code on your Arduino.
Using your Android smartphone to control the light bulb?
•First connect the Bluetooth with your Android device. Now you must launch the app on your device. You can now control the bulb in the app by simply clicking on the ON/OFF switch.
	
	      TEAM 
		 The part of the management is made up of the following individuals:
Jay Jariwala
Mohamad Saad Shaikh	        


 
 
