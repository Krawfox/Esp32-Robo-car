# Krawfox_ROBO :  ESP32 Bluetooth Controlled ROBO CAR

Krawfox_ROBO is an ESP32-based Blutooth Controlled ROBO Car that can be controlled by any android phone by just installing a APP (Bluetooth RC control). It supports Forward , backward , left , right movement with a speed control mechanism. Even though th L298n motor driver heats too much you can easily run it for around 2 - 3 minutes non stop indoor and it is a also a thing i wanna improve next. 

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
    - TT MOTORS ( BO MOTOR )
    - A CHASSIS
    - BATTERY HOLDER
    - BATTERY
    - JUMPER WIRES AND BUNCH OF WIRES

# Pin Configuration

| ESP32 Pin | Function           |
|-----------|--------------------|
| D13    | ENA (Left Motor PWM)  |
| D12    | IN1                   |
| D14    | IN2                   |
| D15    | ENB (Right Motor PWM) |
| D27    | IN3                   |
| D26    | IN4                   |

# Note : ON BLUETOOTH CONNECTION IT SHOWS KRAWFOX_ROBO YOU CAN CHANGE IT VIA THE CODE

# LIBRARIES USED

    - Arduino Framework
    - BluetoothSerial (ESP32)
    - Platformio IO

# Schematic
<img width="2339" height="1654" alt="Schematic_Robo-Car_2026-07-07" src="https://github.com/user-attachments/assets/d7a407af-25d3-46d2-8453-011839166287" />

# Pictures 
<img width="6120" height="8160" alt="20260714_195202" src="https://github.com/user-attachments/assets/53327a03-8d7a-4d1b-9825-dcb865828958" />


Its not a perfect project and there are still many things I want to improve but thats what makes it exciting. I hope to keep updating it and learning more as I go.

