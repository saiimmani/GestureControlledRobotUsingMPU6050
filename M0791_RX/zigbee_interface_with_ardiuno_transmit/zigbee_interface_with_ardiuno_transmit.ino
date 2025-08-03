#include "global.h"
#include "gyro1.h"
#include "motor.h"
//#include "us.h"
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);

  pinMode(m1_p, OUTPUT);
  pinMode(m1_n, OUTPUT);
  pinMode(m2_p, OUTPUT);
  pinMode(m2_n, OUTPUT);

  pinMode(ENA1, OUTPUT);
  pinMode(ENA2, OUTPUT);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(" HAND GESTURE");
  lcd.setCursor(2, 1);
  lcd.print("    ROBOT");
  delay(2000);
  lcd.clear();

}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(" Waiting  ");
  lcd.setCursor(0, 1);
  lcd.print(" For Data...  ");

  while (Serial.available() > 0)
  {
    s = Serial.read();
    Serial.println("received data" + String(s));

    switch (s)
    {
      case 'S' :

        lcd.clear();
        lcd.setCursor(5, 1);
        lcd.print("  STOP   ");
        stop1();
        break;
      case 'F':
        lcd.clear();
        lcd.setCursor(5, 1);
        lcd.print("FORWARD");
        if (F < 20) {
          stop1();
        }
        forword();

        break;
      case 'B':

        lcd.clear();
        lcd.setCursor(5, 1);
        lcd.print(" REVERS ");
        revers();
        break;
      case 'L':

        lcd.clear();
        lcd.setCursor(5, 1);
        lcd.print(" LEFT  ");
        right();

        break;
      case 'R':


        lcd.clear();
        lcd.setCursor(5, 1);
        lcd.print(" RIGHT  ");
        left();
        break;
    }
  }

 delay(500);
}
