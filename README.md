# SintraJeep-Project: Custom Sintraboard Vehicle

A comprehensive DIY engineering project focused on building a fully functional, scale-model Jeep from scratch. This project combines manual craftsmanship using **Sintraboard** (PVC Foam Board) with embedded systems and custom PCB design to create a vehicle that mimics real-world automotive mechanics.

## 🚀 Project Vision

The **SintraJeep** is more than just a toy; it is an exploration into vehicle dynamics, structural design, and electronics. By using Sintraboard as the primary material, the build remains lightweight and easy to modify, while the microcontroller integration allows for realistic control over steering, speed, and scale-model lighting.

## 🛠 Features

* **Scratch-Built Chassis:** Every part is hand-cut and heat-molded from Sintraboard sheets.
* **Proportional Steering:** A dedicated servo-motor system for precise front-wheel turning.
* **Custom PCB Design:** Moving beyond breadboards with a dedicated circuit designed in KiCad.
* **Smart Lighting:** Logic-controlled LEDs for headlights, tail lights, and signals.
* **CAD Guided:** Built using precise 2D layouts and DWG sketches for accuracy.

---

## 📂 Repository Structure

This repository is organized into specific modules to help you follow the build process:

* **`/Documentation`**: Detailed logs on how the vehicle was built, the step-by-step process, and design challenges.
* **`/DWG`**: Contains 2D sketches, technical drawings, and every layout used for cutting the Sintraboard.
* **`/Sample`**: High-quality pictures and videos of the actual project at various stages of completion.
* **`/Codes`**: Arduino source code, including motor logic, steering calibration, and lighting sequences.
* **`/Schematics`**: Electronic design files made with **KiCad**, including circuit diagrams and future PCB layouts.

---

## 🏗 Hardware Components

### 1. Structure & Body

* **Material:** 3mm & 5mm Sintraboard (PVC Foam Board)
* **Adhesive:** Cyanoacrylate (Super Glue) + Baking soda for structural reinforcement.
* **Hardware:** M3 Screws for mounting the motors and PCB.

### 2. Electronics (The Brain)

* **Microcontroller:** Arduino (Uno/Nano) or compatible microcontrollers.
* **Motor Control:** L298N / MX1508 or custom PCB driver.
* **Steering:** SG90 / MG90S Micro Servo.
* **Design Tool:** KiCad (for Schematic Capture and PCB Routing).

---

## 🔧 Installation & Usage

1. **Fabrication:** Open the files in `/DWG` to view the cutting layouts. Apply these to your Sintraboard sheets.
2. **Assembly:** Refer to the guides in `/Documentation` to see how the pieces fit together.
3. **Circuitry:** Check `/Schematics` for the KiCad files. If you are using the PCB design, order the board using the provided Gerber files.
4. **Software:** * Open the Arduino IDE.
* Load the `.ino` files from `/Codes`.
* Connect your board and **Upload**.



---

## 📝 Development Roadmap

* [x] Initial 2D Design (DWG)
* [ ] Chassis Fabrication (Sintraboard)
* [ ] Steering and Drivetrain Integration
* [ ] KiCad Schematic Design
* [ ] Custom PCB Fabrication and Testing
* [ ] Final Assembly and Scale Detail Finishing

## 🤝 Contributing

If you are building your own Sintraboard vehicle or have suggestions for the PCB design, feel free to fork this repo and submit a pull request!

## 📜 License

This project is licensed under the **MIT License**.

---

**Crafting the future of DIY RC vehicles, one Sintraboard sheet at a time.**

---
