//#ifndef US_H
//#define US_H
//#include "global.h"
//#include "motor.h"
//void forword();
//void revers();
//void forword();
//void left();
//void right();
//void stop1();
//int count1 = 0, count2 = 0;
//bool flag1 = true;
//void inZ() {
//  F = U1.ultra();
//  R = U2.ultra();
//  B = U3.ultra();
//  L = U4.ultra();
//}
//void Ublind() {
//  //Serial.println("f:" + String(F) + "r:" + String(R) + "b:" + String(B) + "l:" + String(L));
//  lcd.setCursor(0, 0);
//  lcd.print("Enabling Access:");
//  lcd.setCursor(4, 1);
//  lcd.print("BLIND System");
//  forword();
//  Serial.println("count1" + String(count1));
//
//  count1++;
//  if (count1 > 0 && count1 < 180) {
//
//    if (F < 20 ) {
//      flag1 = false;
//    }
//    while (flag1 == false) {
//      Serial.println("f1");
//
//      Serial.println("count2" + String(count2));
//
//      //      if (count2 > 0 && count2 < 3) {
//      lcd.clear();
//      lcd.setCursor(0, 0);
//      lcd.print("Stop");
//      stop1();
//      delay(1000);
//      player.volume(30);
//      player.play(1);
//      delay(1000);
//      digitalWrite(vib_right, LOW);
//      digitalWrite(vib_left, LOW);
//      Serial.println("S1");
//      delay(2000);
//      //}
//      // if (count2 > 4 && count2 < 7) {
//      lcd.clear();
//      lcd.setCursor(0, 0);
//      lcd.print("rever");
//      revers();
//      Serial.println("revers1");
//
//      delay(1000);
//      //}
//      //if (count2 > 8 && count2 < 13) {
//      left();
//      lcd.clear();
//      lcd.setCursor(0, 0);
//      lcd.print("left");        Serial.println("l1" );
//      delay(2500); // }
//      //      if (count2 > 14 && count2 < 18) {
//      forword();      Serial.println("f2" );
//      lcd.clear();
//      lcd.setCursor(0, 0);
//      lcd.print("f2");
//      delay(3000);
//      //  }
//      //if (count2 > 19 && count2 < 27) {
//      right();      Serial.println("r1" );
//      lcd.clear();
//      lcd.setCursor(0, 0);
//      lcd.print("R1");
//      delay(2500);
//      //    }
//      //    if (count2 > 28 && count2 < 32) {
//      forword();      Serial.println("f3" );
//      lcd.clear();
//      lcd.setCursor(0, 0);
//      lcd.print("f3");
//      delay(5000);
//      //    }
//      //    if (count2 > 33 && count2 < 36) {
//      right();      Serial.println("r2" );
//      lcd.clear();
//      lcd.setCursor(0, 0);
//      lcd.print("r2");
//      delay(2500);
//      //    }
//      //    if (count2 > 37 && count2 < 42) {
//      forword();      Serial.println("f4" );
//      lcd.clear();
//      lcd.setCursor(0, 0);
//      lcd.print("f4");
//      delay(3000);
//      //    }
//      //    if (count2 > 43 && count2 < 46) {
//      left();
//      lcd.clear();
//      lcd.setCursor(0, 0);
//      lcd.print("l2");        Serial.println("l2" );
//      delay(2500);
//      //    }
//      //    if (count2 > 47 && count2 < 55) {
//      forword();      Serial.println("f5" );
//      lcd.clear();
//      lcd.setCursor(0, 0);
//      lcd.print("F5");
//      //    }
//            delay(5000);
//
//
//      if (count2 > 56) {
//        count2 = 0;      Serial.println("comp" );
//        flag1 = true;
//        break;
//      }
//
//      count2++;
//      delay(1000);
//    }
//  }
//  if (count1 == 100) {
//    stop1();        count1 = 0;
//
//    iot_rx = 'D';
//    delay(3000);
//
//  }
//  if (R < 20) {
//    Serial.println("R_B");
//
//    player.volume(30);
//    player.play(3);
//    delay(1000);
//  }
//  if (L < 20 && L > 1) {
//    Serial.println("L_B");
//
//    player.volume(30);
//    player.play(4);
//    delay(1000);
//  }
//  if (B < 20) {
//    Serial.println("B_B");
//
//    player.volume(30);
//    player.play(2);
//    delay(1000);
//  }
//
//
//}
//
//
////      if (F < 20) {
////        player.volume(30);
////        player.play(1);
////        delay(1000);
////        if (R > 20) {
////          right();
////          delay(1500);
////          forword();
////        }
////        else if (R < 20) {
////          digitalWrite(vib_right, HIGH);
////          digitalWrite(vib_left, LOW);
////          delay(1000);
////          digitalWrite(vib_right, LOW);
////          digitalWrite(vib_left, LOW);
////          player.volume(30);
////          player.play(3);
////          delay(1000);
////        }
////        else if (L > 20) {
////          left();
////          delay(1500);
////          forword();
////        }
////        else if (L < 20) {
////          digitalWrite(vib_right, LOW);
////          digitalWrite(vib_left, HIGH);
////          delay(1000);
////          digitalWrite(vib_right, LOW);
////          digitalWrite(vib_left, LOW);
////          player.volume(30);
////          player.play(4);
////          delay(1000);
////        }
////      }
////    }
////    else {
////      forword();
////      stop1();
////      delay(1000);
////    }
////  }
//
//
////if (R < 20) {
////  digitalWrite(vib_right, HIGH);
////  digitalWrite(vib_left, LOW);
////  delay(1000);
////  digitalWrite(vib_right, LOW);
////  digitalWrite(vib_left, LOW);
////  player.volume(30);
////  player.play(3);
////  delay(1000);
////  if (L > 20 && F > 20)
////  {
////    left();
////    delay(1000);
////    forword();
////    digitalWrite(right_led, LOW);
////    digitalWrite(left_led, LOW);
////  }
////  else if  (L > 20 && R > 20) {
////    left();
////    delay(1000);
////    revers();
////    digitalWrite(right_led, LOW);
////    digitalWrite(left_led, LOW);
////  }
////}
////if (L < 20 && L > 1) {
////  digitalWrite(vib_right, LOW);
////  digitalWrite(vib_left, HIGH);
////  delay(1000);
////  digitalWrite(vib_right, LOW);
////  digitalWrite(vib_left, LOW);
////  player.volume(30);
////  player.play(4);
////  delay(1000);
////  if (R > 20 && F > 20)
////  {
////    right();
////    delay(1000);
////    forword();
////    digitalWrite(right_led, LOW);
////    digitalWrite(left_led, LOW);
////  }
////  else if  (R > 20 && R > 20) {
////    right();
////    delay(1000);
////    revers();
////    digitalWrite(right_led, LOW);
////    digitalWrite(left_led, LOW);
////  }
////}
////}
//void Udafe() {
//  Serial.println("f:" + String(F) + "r:" + String(R) + "b:" + String(B) + "l:" + String(L));
//  forword();
//  if (F < 20) {
//    lcd.clear(); lcd.setCursor(3, 0); lcd.print("FROUNT SIDE "); lcd.setCursor(2, 1); lcd.print("Object detected");
//    Serial.println("Strat and F_D");
//    digitalWrite(right_led, LOW);
//    digitalWrite(left_led, LOW);
//    digitalWrite(vib_right, LOW);
//    digitalWrite(vib_left, LOW);
//    delay(1000);
//    //revers();
//  }
//  if (B < 20) {
//    lcd.clear(); lcd.setCursor(3, 0); lcd.print("BACK SIDE "); lcd.setCursor(2, 1); lcd.print("Object detected");
//    Serial.println("B_D");
//    digitalWrite(vib_right, HIGH);
//    digitalWrite(vib_left, HIGH);
//    delay(3000);
//    digitalWrite(vib_right, LOW);
//    digitalWrite(vib_left, LOW);
//    //forword();
//  }
//  if (R < 20) {
//    lcd.clear(); lcd.setCursor(3, 0); lcd.print("RIGHT SIDE "); lcd.setCursor(2, 1); lcd.print("Object detected");
//    Serial.println("R_D");
//
//    digitalWrite(right_led, HIGH);
//    digitalWrite(left_led, LOW);
//    digitalWrite(vib_right, LOW);
//    digitalWrite(vib_left, LOW);
//    delay(1000);
//  }
//
//
//  if (L < 20 && L > 1) {
//
//    lcd.clear(); lcd.setCursor(3, 0); lcd.print("LEFT SIDE "); lcd.setCursor(2, 1); lcd.print("Object detected");
//    Serial.println("L_D");
//
//    digitalWrite(right_led, LOW);
//    digitalWrite(left_led, HIGH);
//    digitalWrite(vib_right, LOW);
//    digitalWrite(vib_left, LOW);
//  }
//
//  else {
//    digitalWrite(right_led, LOW);
//    digitalWrite(left_led, LOW);
//    digitalWrite(vib_right, LOW);
//    digitalWrite(vib_left, LOW);
//  }
//}
//
//#endif
