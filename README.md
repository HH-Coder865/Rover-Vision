# 🤖 Obstacle Avoiding Rover

An Arduino-based obstacle avoiding rover that detects obstacles using an ultrasonic sensor and automatically changes direction to avoid collisions.

This project demonstrates the basics of embedded systems, robotics, sensor integration, and motor control using Arduino.

## 🚀 Features

- 📡 Obstacle detection using an ultrasonic sensor (HC-SR04).
- 🚗 Automatic movement and obstacle avoidance.
- ↩️ Direction control using a motor driver.
- ⚙️ DC motor control for forward, backward, left, and right movements.
- 🔄 Servo motor support for scanning surroundings.
- 💻 Developed using Arduino IDE.

## 🛠️ Components Required

| Component | Purpose |
|---|---|
| Arduino Uno | Main controller |
| HC-SR04 Ultrasonic Sensor | Measures distance to obstacles |
| L298N Motor Driver | Controls the DC motors |
| DC Geared Motors | Drive the rover |
| Servo Motor | Rotates the sensor to scan directions |
| Rover Chassis | Supports the components |
| Battery | Powers the rover |
| Jumper Wires | Electrical connections |

## 🔌 Working Principle

1. The ultrasonic sensor measures the distance between the rover and an obstacle.
2. The Arduino processes the measured distance.
3. If the path is clear, the rover moves forward.
4. If an obstacle is detected within the predefined distance, the rover stops.
5. The rover can move backward and change direction to find a clear path.
6. The servo motor can be used to scan different directions before choosing a path.

## 💻 Software Requirements

- Arduino IDE
- Arduino Uno board support
- Servo library (`Servo.h`)

## ⚡ Getting Started

1. Clone this repository:

   ```bash
   git clone https://github.com/HH-Coder865/Obstacle-Avoiding-Rover.git
