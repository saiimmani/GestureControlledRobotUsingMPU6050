#include<Wire.h>
//#include <LiquidCrystal.h>
//const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
//LiquidCrystal lcd(13,12,11,10,9,8);
//const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
const int MPU1 = 0x68;           //address for SENSOR 1  (sensor that is placed on the shank)

float GX, GY, GZ;             //global variables for SENSOR 1 raw data  (sensor that is placed on the shank)
float GYX, GYY, GYZ;

int minVal = 265;                //control the sensor angular velocity
int maxVal = 402;
#define Push_botton 3
#define Push_botto0n 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    pinMode(Push_botton, INPUT_PULLUP);
  pinMode(Push_botto0n, OUTPUT);
  digitalWrite(Push_botto0n, LOW);
//  lcd.begin(16, 2);
//  lcd.print("hello, world!");
  Wire.begin();                      //SENSOR 1  (sensor that is placed on the shank)
  Wire.beginTransmission(MPU1);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
  delay(1000);
}

void loop() {
//  lcd.clear();
  // put your main code here, to run repeatedly:
//    int botton_value = digitalRead(Push_botton);
  Wire.beginTransmission(MPU1);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU1, 12, true);
  GX = Wire.read() << 8 | Wire.read();                //raw data reading for the angular velocity for SENSOR 1  (sensor that is placed on the shank)
  GY = Wire.read() << 8 | Wire.read();
  GZ = Wire.read() << 8 | Wire.read();

  int X1ANG = map(GX, minVal, maxVal, -90, 90);       // change the raw data into degrees for SENSOR 1  (sensor that is placed on the shank)
  int Y1ANG = map(GY, minVal, maxVal, -90, 90);
  int Z1ANG = map(GZ, minVal, maxVal, -90, 90);

  GYX = RAD_TO_DEG * (atan2(-Y1ANG, -Z1ANG) + PI);
  GYY = RAD_TO_DEG * (atan2(-X1ANG, -Z1ANG) + PI);
  GYZ = RAD_TO_DEG * (atan2(-Y1ANG, -X1ANG) + PI);

 Serial.println(GYX);
//  lcd.setCursor(0, 0);
//  lcd.print(GYX);
  //  Serial.print(":");
  //  Serial.print(GYY);
  //  Serial.print(":");
  //  Serial.println(GYZ);
  //    int botton_value = digitalRead(Push_botton);  
//     if ( botton_value == 0)
//  {
//     if (GYX >= 290 && GYX <= 310)
//    {
//      Serial.print('L');
//    }
//     if (GYX >= 40 && GYX <= 60)
//    {
//      Serial.print('R');
////      ss.write('R');
//    }
//     if (GYX >= 320 && GYX <= 350)
//    {
//      Serial.print('F');
//      //ss.write('B');
//    }
//     if (GYX >= 10 && GYX <= 39)
//    {
//      Serial.print('B');
////      ss.write('F');
//    }
//  }
//      else
//  {
//    Serial.print('S');
//  }
 delay(1000);
}
