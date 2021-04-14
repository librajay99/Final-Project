// once you see your bluetooth module blinking and you want to check if the commands are being heard use this code.
// Install an andriod application on your phone.
// The name of the andriod application is Arduino BlueControl , this app is available on the playstore. 
//once downloading this app connect your bluetooth module and select terminal after opening the application and try sending some text to the serial monitor.
// If you see the text that means your bluetooth module is working properly :) :) :)



#include <SoftwareSerial.h>

SoftwareSerial mySerial(8, 9); // RX, TX

void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Native USB only
  }


  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(115200);
  while (!mySerial) { Serial.println("Waiting for bluetooth..."); }
  mySerial.println("Hello, world?");
}

void loop() // run over and over
{
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (Serial.available())
    mySerial.write(Serial.read());
}

