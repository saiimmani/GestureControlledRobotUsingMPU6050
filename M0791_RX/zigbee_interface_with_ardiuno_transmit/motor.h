#ifndef MOTOR_H
#define  MOTOR_H
#include "global.h"
#include "us.h"
void revers();
void forword();
void left();
void right();
void stop1();
void forword() {
  //inZ();
  analogWrite(ENA1, 100);
  digitalWrite(m1_p, HIGH);
  digitalWrite(m1_n, LOW);
  analogWrite(ENA2, 100);
  digitalWrite(m2_p, HIGH);
  digitalWrite(m2_n, LOW);
}
void revers() {
  // inZ();
  analogWrite(ENA1, 100);
  digitalWrite(m1_p, LOW);
  digitalWrite(m1_n, HIGH);
  analogWrite(ENA2, 100);
  digitalWrite(m2_p, LOW);
  digitalWrite(m2_n, HIGH);
}
void left() {
  //inZ();
  analogWrite(ENA1, 100);
  digitalWrite(m1_p, LOW);
  digitalWrite(m1_n, HIGH);
  analogWrite(ENA2, 100);
  digitalWrite(m2_p, HIGH);
  digitalWrite(m2_n, LOW);
}
void right() {
  //inZ();
  analogWrite(ENA1, 100);
  digitalWrite(m1_p, HIGH);
  digitalWrite(m1_n, LOW);
  analogWrite(ENA2, 100);
  digitalWrite(m2_p, LOW);
  digitalWrite(m2_n, HIGH);
}
void stop1() {
  analogWrite(ENA1, 0);
  digitalWrite(m1_p, LOW);
  digitalWrite(m1_n, LOW);
  analogWrite(ENA2, 0);
  digitalWrite(m2_p, LOW);
  digitalWrite(m2_n, LOW);
}
#endif
