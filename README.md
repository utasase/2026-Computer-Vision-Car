# 2026 Computer Vision Car

## Project Overview  
This project demonstrates an autonomous car system that uses computer vision to control movement. A vision model processes live camera input and sends commands to an Arduino, which then drives the motors accordingly.

The goal is to bridge real-time image processing with embedded systems to create an intelligent, responsive vehicle.

---

##  How It Works  
1. A camera connected to the Jetson Nano captures live video.  
2. Computer vision algorithms process each frame to detect **red-colored regions**.  
3. When red is detected, a command is generated (e.g., stop or change direction).  
4. Commands are sent via serial communication to the Arduino Uno.  
5. The Arduino controls the motor driver, which powers the motors and moves the car.
---

## Technologies Used  
- Computer Vision (OpenCV / C++)  
- Embedded Systems (Arduino)  
- Serial Communication  

---

## Hardware Components  
- Jetson Nano (vision processing)  
- Arduino Uno (motor control)  
- L298N Motor Driver  
- DC Geared TT Motors  
- Car Chassis and Wheels  
- Camera Module  

---

##  Features  
- Real-time object/color detection  
- Serial communication between Jetson Nano and Arduino  
- Motor control based on vision input  
- Modular design for easy upgrades (lane detection, obstacle avoidance)

---

## Future Improvements  
- Implement lane detection and path planning  
- Add obstacle avoidance using sensors or depth cameras  
- Improve detection accuracy with machine learning models  
- Optimize communication latency  

---

##  Demo  
Later hehe

---

