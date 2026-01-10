# 🇵🇭 Project Jeepney: Smart Sintraboard RC

A DIY, scale-model Jeepney built from the ground up using **Sintraboard** and powered by **Arduino/Microcontrollers**. This project aims to replicate the iconic Philippine Jeepney with fully functional steering, drivetrain, and scale lighting.

## 🚀 Overview

The goal of this project is to create a "toy" jeep that functions like a real vehicle. Unlike off-the-shelf RC cars, this build focuses on **scratch-building** the body and implementing custom logic for realistic features (e.g., blinkers, brake lights, and speed control).

## 🛠 Features

* **Custom Chassis:** Hand-cut and heat-bent Sintraboard body.
* **Microcontroller Powered:** Managed by an Arduino (or ESP32).
* **Proportional Control:** Realistic steering and throttle (not just ON/OFF).
* **Scale Lighting:** Working headlights, turn signals, and interior cabin lights.
* **Expandable:** Future support for Bluetooth or Wi-Fi mobile app control.

---

## 🏗 Hardware Components

| Component | Description |
| --- | --- |
| **Microcontroller** | Arduino Nano / Uno |
| **Chassis Material** | 3mm or 5mm Sintraboard |
| **Motor Driver** | L298N or L293D |
| **Drivetrain** | DC Gear Motors |
| **Steering** | SG90 Servo Motor |
| **Power** | Li-ion 18650 Battery Pack |

---

## 📂 Repository Structure

* `/code` — Arduino (.ino) sketches and control logic.
* `/schematics` — Wiring diagrams and circuit layouts.
* `/docs` — Sintraboard cutting measurements and assembly guides.
* `/media` — Photos and videos of the build progress.

## 🔧 Installation & Setup

1. **Mechanical Build:** Assemble the Sintraboard chassis using cyanoacrylate (super glue).
2. **Wiring:** Connect the motor driver to the Arduino digital pins and the steering servo to a PWM-enabled pin.
3. **Upload Code:**
* Open the `.ino` file in the Arduino IDE.
* Ensure the `Servo.h` library is installed.
* Select your board and port, then click **Upload**.



## 📝 Roadmap

* [ ] Complete Sintraboard chassis assembly
* [ ] Implement motor H-Bridge logic
* [ ] Fine-tune Servo steering angles
* [ ] Install scale LED lighting system
* [ ] Add Bluetooth/Remote control functionality

## 🤝 Contributing

Suggestions for improving the code or chassis design are welcome! Feel free to fork this repo and submit a pull request.

## 📜 License

This project is open-source under the [MIT License](https://www.google.com/search?q=LICENSE).
