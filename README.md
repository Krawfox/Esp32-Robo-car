# Krawfox_ROBO :  ESP32 Bluetooth Controlled ROBO CAR

Krawfox_ROBO is an ESP32-based Bluetooth-controlled differential drive robot. It communicates with any Bluetooth Serial Terminal or Android Bluetooth RC Controller app using the ESP32's built-in Classic Bluetooth module.

# The ROBO Supports

    - Forward and Backward Movement
    - Left and Right Turning
    - Stop Command
    - Speed control

# Features

    - ESP32 Bluetooth communication
    - L298N/L293D compatible motor driver
    - PWM motor speed control

# Hardware Required

    - ESP32 Devkit V1
    - L298N (or L293D) Motor Driver
    - TT MOTORS
    - A CHASSIS
    - BATTERY HOLDER
    - BATTERY
    - JUMPER WIRES AND BUNCH OF WIRES

# Pin Configuration

| ESP32 Pin | Function              |
|-----------|-----------------------|
| GPIO13    | ENA (Left Motor PWM)  |
| GPIO12    | IN1                   |
| GPIO14    | IN2                   |
| GPIO15    | ENB (Right Motor PWM) |
| GPIO27    | IN3                   |
| GPIO26    | IN4                   |

# note : ON BLUETOOTH CONNECTION IT SHOWS KRAWFOX_ROBO YOU CAN CHANGE IT VIA THE CODE

# LIBRARIES USED

    - Arduino Framework
    - BluetoothSerial (ESP32)
    - Platformio IO

# Schematic
<img width="2339" height="1654" alt="Schematic_Robo-Car_2026-07-07" src="https://github.com/user-attachments/assets/d7a407af-25d3-46d2-8453-011839166287" />

# Pictures 
<img width="6120" height="8160" alt="20260714_195202" src="https://github.com/user-attachments/assets/53327a03-8d7a-4d1b-9825-dcb865828958" />

# Inspiration 
Ever since childhood I have been fascinated by RC cars. As a kid I built several toy cars but they were either manually operated or powered by simple motors. I never had the chance to build one that could be controlled wirelessly using a remote or a smartphone.

This project is my way of fulfilling that childhood dream. My goal was not just to build an RC car but to design and create something on my own while learning about electronics programming and wireless communication. I plan to continue improving this project by adding new features enhancing its performance and making it more reliable over time.

Its not a perfect project and there are still many things I want to improve but thats what makes it exciting. I hope to keep updating it and learning more as I go.

