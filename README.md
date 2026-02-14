# 🤖 Gesture Controlled Robot Using MPU‑6050

**SRMIST In‑House Project**

A modular, gesture‑based robotic system enabling real‑time control via natural hand motions. Orientation data is captured by the MPU‑6050 sensor and transmitted wirelessly using Zigbee modules between the transmitter and the robot.

---

## 📂 Repository Structure

```
GestureControlledRobotUsingMPU6050/
├── M0791_RX/
│   └── zigbee_interface_with_arduino_transmit/      # Receiver-side Zigbee interface + Arduino Mega code
├── M0791_TX/
│   └── ITME04_TX/                                   # Transmitter-side Arduino Nano code for MPU‑6050 data
├── README.md
└── (future directories: circuit diagrams, docs, images, etc.)
```

---

## 🧰 Project Description

Developed to allow robot navigation through intuitive hand gestures, the project comprises two primary modules:

* **Transmitter Module (`M0791_TX/ITME04_TX`)**

  * Arduino Nano paired with the MPU‑6050 sensor (accelerometer + gyroscope)
  * Processes real‑time gesture and orientation input and transmits it via Zigbee

* **Receiver Module (`M0791_RX/zigbee_interface_with_arduino_transmit`)**

  * Arduino Mega receives gesture commands via Zigbee
  * Controls motors through a driver (e.g. L298N), enabling robot movement

---

## ✨ Key Features

* Real‑time gesture recognition powered by MPU‑6050 sensor data
* Wireless communication via low‑power, long‑range Zigbee modules
* Modular architecture for sensor and feature extensions

---

## 🧩 Components & Technologies

* **Hardware**: Arduino Nano, Arduino Mega, MPU‑6050, Zigbee Module, motor driver, DC motors, robot chassis
* **Software**: Embedded C / Arduino C
* **Communication Protocols**: Zigbee

---

## 📦 File & Module Breakdown

| Folder / Module                                    | Description                                                                         |
| -------------------------------------------------- | ----------------------------------------------------------------------------------- |
| `M0791_TX/ITME04_TX`                               | Transmitter-side code for processing MPU‑6050 gesture data and sending via Zigbee   |
| `M0791_RX/zigbee_interface_with_arduino_transmit`  | Receiver-side code for receiving from Zigbee and commanding motors via Arduino Mega |
| `README.md`                                        | Project overview and documentation                                                  |

---

## ⏭️ Future Enhancements

* Include **obstacle detection** using ultrasonic or IR sensors
* Explore **Bluetooth or Wi‑Fi** communication as alternatives
* Add **machine learning-based gesture classification**
* Integrate **LED indicators** or **buzzers** for gesture feedback
* Provide wiring schematics and circuit diagrams

---

## 🛠️ Setup Instructions

### For Transmitter (Arduino Nano + MPU‑6050):

1. Connect MPU‑6050 via I²C (SDA/SCL, Vcc, GND) to Nano
2. Upload code from `M0791_TX/ITME04_TX/`
3. Ensure Zigbee transmitter module is connected to TX/RX pins

### For Receiver (Arduino Mega + Motor Driver):

1. Connect Zigbee receiver to Mega via serial (e.g. RX1/TX1 or SoftwareSerial)
2. Connect motor driver (e.g. L298N) to digital output pins and motors
3. Power the system with suitable battery or DC supply
4. Upload code from `M0791_RX/zigbee_interface_with_arduino_transmit/`

---

## 👥 Contributors

* **[@Immani Rama Venkata Sri Sai](https://github.com/saiimmani)** 
* **[@DheerajKonakalla4](https://github.com/DheerajKonakalla4)** 
* **[@Tasleemkhan7](https://github.com/Tasleemkhan7)**

> *This project is as part of an academic effort, Under Eyantra Lab, SRMIST.*

---

Feel free to let me know if you’d like help adding detailed circuitry diagrams, wiring photos, code walkthroughs, or user instructions.
