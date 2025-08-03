///#ifndef GYRO1_H
//#define GYRO1_H
//#include "global.h"
//#include "motor.h"
//
//void gyro(void)
//{
//
//  lcd.clear();
//  lcd.setCursor(0, 0);
//  lcd.print(" Waiting  ");
//  lcd.setCursor(0, 1);
//  lcd.print(" For Data...  ");
//
//  while (Serial.available() > 0)
//  {
//    s = Serial.read();
//    Serial.println("received data" + String(s));
//
//    switch (s)
//    {
//      case 'S' :
//
//        lcd.clear();
//        lcd.setCursor(5, 1);
//        lcd.print("  STOP   ");
//        stop1();
//        break;
//      case 'F':
//        lcd.clear();
//        lcd.setCursor(5, 1);
//        lcd.print("FORWARD");
//        if (F < 20) {
//          stop1();
//        }
//        forword();
//
//        break;
//      case 'B':
//
//        lcd.clear();
//        lcd.setCursor(5, 1);
//        lcd.print(" REVERS ");
//        revers();
//        break;
//      case 'L':
//
//        lcd.clear();
//        lcd.setCursor(5, 1);
//        lcd.print(" RIGHT  ");
//        right();
//
//        break;
//      case 'R':
//
//
//        lcd.clear();
//        lcd.setCursor(5, 1);
//        lcd.print("  LEFT ");
//        left();
//        break;
//    }
//  }
//}
//#endif
