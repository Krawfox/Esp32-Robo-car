# Arkbot

Why did I named it ARKBOT ?
Since While building it with my friend ( WE both were building our own seperate ) We had a pretty loose connection so on the 1st trial I burnt my robo tbh in the bus later exchanged with my friend ig he has the pic of the burnt robo , So since It was my 1st Hardware project TBH and had fire on the 1st trial so I named my project arkbot ( It also resembles my current username Arksukie as well)

Arkbot is an ESP32-based Blutooth Controlled ROBO Car that can be controlled by any android phone by just installing a APP (Bluetooth RC control). It supports Forward , backward , left , right movement with a speed control mechanism. Even though th L298n motor driver heats too much you can easily run it for around 2 - 3 minutes non stop indoor and it is a also a thing i wanna improve next. 

# The ROBO Supports

    - Forward and Backward Movement
    - Left and Right Turning
    - Stop Command
    - Speed control

# Features

    - ESP32 Bluetooth communication
    - L298N/L293D compatible motor driver
    - PWM motor speed control

#  Bill of Materials

| Item | Qty | Unit Price (NPR) | Total (NPR) | Unit Price (USD) | Total (USD) | Purchased From |
|---|---|---|---|---|---|---|
| ESP32 Devkit V1 | 1 | 1300 | 1300 | $8.52 | $8.52 | Shanti Suppliers (Local Store) |
| L298N Motor Driver | 1 | 800 | 800 | $5.25 | $5.25 | Shanti Suppliers (Local Store) |
| TT Motor (BO Motor) | 4 | 200 | 800 | $1.31 | $5.25 | Shanti Suppliers (Local Store) |
| Battery Holder | 1 | 100 | 100 | $0.66 | $0.66 | Shanti Suppliers (Local Store) |
| Battery + Jumper Wires + Misc. Wires | 1 | 800 | 800 | $5.25 | $5.25 | Shanti Suppliers (Local Store) |
| Wooden Chasis | 1 | - | - | - | - | Self Made |
| **Grand Total** | **9** | - | **3800** | - | **$24.92** | - |

> Exchange rate used: 1 USD = 152.5 NPR (approx., Aug 2026)

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

# Note : ON BLUETOOTH CONNECTION IT SHOWS Arkbot YOU CAN CHANGE IT VIA THE CODE 

# LIBRARIES USED

    - Arduino Framework
    - BluetoothSerial (ESP32)
    - Platformio IO

# Schematic
<img width="2339" height="1654" alt="Schematic_Robo-Car_2026-07-07" src="https://github.com/user-attachments/assets/d7a407af-25d3-46d2-8453-011839166287" />

# Pictures 
<img width="6120" height="8160" alt="20260714_195202" src="https://github.com/user-attachments/assets/53327a03-8d7a-4d1b-9825-dcb865828958" />


Its not a perfect project and there are still many things I want to improve but thats what makes it exciting. I hope to keep updating it and learning more as I go.

