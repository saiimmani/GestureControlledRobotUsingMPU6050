#include "gyro.h"
void gyro(void);
#include<SoftwareSerial.h>
SoftwareSerial ss(7, 8); //RX TX
//int Push_botton=6;
boolean crash_flag = false;
//#define Push_botton 3
//#define Push_botto0n 4

void control(void);

void setup()
{
  Wire.begin();                      //SENSOR 1  (sensor that is placed on the shank)
  Wire.beginTransmission(MPU1);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
  delay(1000);
  //  pinMode(Push_botton, INPUT_PULLUP);
  //  pinMode(Push_botto0n, OUTPUT);
  //  digitalWrite(Push_botto0n, LOW);
  Serial.begin(9600);              //baudrate ( transferring a maximum of 9600 bits per second)
  //  ss.begin(9600);
}

void loop()
{

  //  int botton_value = digitalRead(Push_botton);
  //    Serial.println(botton_value );
  // // control();
  //    if ( botton_value == 0)
  //    {
  control();
  //    }
  //    else
  //    {
  //      Serial.print('S');
  //    }
  delay(1000);
}



void control()
{
  gyro();

  if (GYX >= 355 && GYX <= 359 || GYX >= 0 && GYX <= 25 && GYY >= 330 && GYY <= 359 || GYY >= 0 && GYY <= 6 && GYZ >= 80 && GYZ <= 220) //&& ((GYY >= 200) && (GYY <= 320)) && ((GYZ >= 200) && (GYZ <= 320)))
  {
    Serial.print('S');
    //ss.write('N');
  }
  if (GYX >= 25 && GYX <= 100 && GYY <= 359 && GYZ <= 114 ) // && ((GYY >= 310) && (GYY <= 340)) && ((GYZ >= 80) && (GYZ <= 130)))
  {
    Serial.print('R');
    //ss.write('R');
  }
  if (GYX >= 300 && GYX <= 359 && GYY >= 330 && GYZ >= 221) // && ((GYY >= 310) && (GYY <= 340)) && ((GYZ >= 80) && (GYZ <= 130)))
  {
    Serial.print('L');
    //ss.write('L');
  }
  if (GYY <= 330 && GYY <= 330 && GYZ >= 160) //&& ((GYY >= 50) && (GYY <= 90)) && ((GYZ >= 0) && (GYZ <= 50)))
  {
    Serial.print('F');
    //ss.write('F');
  }
  if (GYX >= 0 && GYX <= 25 && GYY <= 70 && GYZ <= 110 ) //&& ((GYY >= 270) && (GYY <= 345)) && ((GYZ >= 150) && (GYZ <= 185)))
  {
    Serial.print('B');
    //ss.write('B');
  }
}
