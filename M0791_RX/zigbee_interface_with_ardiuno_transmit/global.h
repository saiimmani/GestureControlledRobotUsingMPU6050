#ifndef GLOBAL_H
#define GLOBAL_H

//#define right_led A6
//#define left_led A7

#define m1_p A0
#define m1_n A1
#define m2_p A2
#define m2_n A3

#define ENA1 5  // PWM pin for speed control
#define ENA2 6  // PWM pin for speed 
//#define vib_right A13
//#define vib_left A14

//#include "SoftwareSerial.h"
//#include "DFRobotDFPlayerMini.h"
//#include <ultrasonic.h>
//ULTRASONIC U1, U2, U3, U4;

#include <Wire.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
//static const uint8_t PIN_MP3_TX = 50;
//static const uint8_t PIN_MP3_RX = 51;
//SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);
//DFRobotDFPlayerMini player;
char s, iot_rx;
int count = 0;
int F, R, B, L;

#endif
