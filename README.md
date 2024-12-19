# Bluetooth-Controlled 4WD Car with L239D Motor Driver and HC-05 Module 🚗📱

This project demonstrates a Bluetooth-controlled 4WD car using an Arduino, L239D Motor Driver, and HC-05 Bluetooth module. The car is powered by two 3.7V batteries 🔋 and uses a 200 RPM motor to drive the wheels. The car's movement is controlled via a mobile app 📲, where commands are sent through the HC-05 Bluetooth module to the Arduino.

## Project Components 🧩

- **Arduino UNO** (or any compatible Arduino board) 💻
- **L239D Motor Driver Shield** 🔧
- **HC-05 Bluetooth Module** 📡
- **4x DC Motors** (200 RPM) ⚙️
- **2x 3.7V Batteries** 🔋🔋
- **Jumper wires** for connections 🔌
- **Bluetooth Control App** (any mobile app that supports Bluetooth communication) 📱

## Hardware Setup 🔧

### 1. HC-05 Bluetooth Module Connections 🔌:
   - **RX (HC-05)** → **Pin 10 (TX) on Arduino** 🔴
   - **TX (HC-05)** → **Pin 9 (RX) on Arduino** 🔴
   - **VCC (HC-05)** → **5V on Arduino** ⚡
   - **GND (HC-05)** → **GND on Arduino** 🟢

### 2. L239D Motor Driver Shield ⚙️:
   - Attach the **L239D Motor Driver Shield** on top of the Arduino UNO. 🔌
   - The motor shield connects to the motors:
     - **Motor A (M1, M2)** → First Motor 🔁
     - **Motor B (M3, M4)** → Second Motor 🔁
     - **Motor C (M5, M6)** → Third Motor (optional) 🔁
     - **Motor D (M7, M8)** → Fourth Motor (optional) 🔁

### 3. Power Supply 🔋:
   - The Arduino is powered by **5V** from the Arduino’s **USB** or **Vin** pin. 🔋
   - The motors are powered using **two 3.7V batteries** in series for a 7.4V supply, connected to the motor driver shield. ⚡

## Software Setup 💻

### 1. Install Libraries 📚:
   - **AFMotor Library**: This library is used to interface with the motor driver shield. ⚙️
   - **SoftwareSerial Library**: This is used to communicate with the Bluetooth module over a specified serial interface. 📡

### 2. Upload Code 🚀:
   - Upload the provided Arduino code to your Arduino board using the Arduino IDE. 💻

### 3. Bluetooth Communication 📡:
   - The Arduino listens to commands from the Bluetooth module. 📱
   - The mobile app sends commands like **'F'** for forward, **'B'** for backward, **'L'** for left, and **'R'** for right. ⬆️⬇️⬅️➡️
   - The received commands control the motor movements via the L239D Motor Driver Shield. ⚙️

## Control Application 📱

- **Mobile App**: You can use any Bluetooth RC Controller app on your smartphone to send the control commands. Simply pair your phone with the HC-05 Bluetooth module, and use the app to send the respective commands. 📲
  
  - Download and configure a Bluetooth RC Controller app from your mobile app store. 📥
  - Set the control buttons (Forward, Backward, Left, Right) to send **'F'**, **'B'**, **'L'**, and **'R'** commands, respectively. ⬆️⬇️⬅️➡️

## Powering the System 🔋

- **Arduino Power**: The Arduino can be powered via **USB** or **external supply (Vin pin)** if required. ⚡
- **Motors Power**: The motors are powered through the **L239D motor driver shield** using **two 3.7V batteries** connected in series (for 7.4V total). Ensure the motor driver shield is capable of handling the required voltage and current for your motors. ⚙️

## Troubleshooting ⚠️

- **No Movement**: Ensure the Bluetooth module is properly paired and connected to your Arduino. 🔴
- **Motor not responding**: Check the motor connections on the motor shield and make sure it’s correctly powered. ⚡
- **No Bluetooth connection**: Verify the baud rate (9600) and ensure the Bluetooth module is paired with the phone. 📡

## License 📝

This project is open-source. Feel free to modify, use, and distribute it as per your needs. 🔓
