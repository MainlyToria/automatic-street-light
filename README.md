# Automatic Street Light Project

## Overview
The Automatic Street Light project basically controls the street lights depending on the ambient light. This project automatically switches the lights ON at night and OFF during the daytime, thereby helping in efficient usage of energy. It uses an Arduino Uno, an LDR, and LEDs to simulate the operation of a real-world street lighting system.

## Features
- Automatic detection of light levels using an LDR sensor.
- LCD display for real-time feedback (e.g., "NIGHT" or "DAY").
- Sequential activation/deactivation of LEDs to simulate a realistic street light system.
- Energy-efficient operation by turning lights ON only when needed.
- Debugging capability via the Serial Monitor.

## Device Components Used
1. **Arduino Uno**
2. **LDR (Light Dependent Resistor)**
3. **16x2 LCD Display**
4. **Resistors** (e.g., 10kΩ for the LDR circuit)
5. **LEDs** (Yellow)
6. **Connecting Wires**

## Circuit Description
1. The LDR is connected to analog pin A0 of the Arduino Uno. Its resistance varies based on the intensity of light, which is used to determine ambient light levels.
2. The LEDs are connected to digital pins 8, 9, and 10 and represent the street lights.
3. A 16x2 LCD is connected to digital pins 2 through 7 for displaying the current state ("NIGHT" or "DAY").
4. Resistors are used with the LDR and LEDs to prevent excess current.

## Working Principle
- During low light conditions (night), the LDR's resistance increases, causing a higher analog value on A0. When this value crosses the threshold, the system identifies it as "NIGHT."
- The Arduino turns ON the LEDs sequentially and displays "NIGHT" on the LCD.
- In bright conditions (day), the LDR's resistance decreases, and the analog value drops below the threshold. The system turns OFF the LEDs and displays "DAY."

## Arduino Code
The code for this project uses the Arduino IDE and includes the following features:
- Initialization of LCD and pin configurations.
- Reading and mapping the LDR values from a range of 0-1023 to 0-255.
- Logic to control LEDs based on the mapped LDR values.
- Real-time display updates on the LCD and debugging via Serial Monitor.

## How to Run the Project
1. Connect the components as per the circuit diagram.
2. Upload the provided Arduino code to the Arduino Uno using the Arduino IDE.
3. Open the Serial Monitor (optional) to observe the mapped LDR values.
4. Adjust the ambient light level to see the LEDs turn ON/OFF and the LCD display update in real-time.

## Applications
- Automatic street lighting systems for cities.
- Energy-efficient lighting for homes and offices.
- Industrial automation systems.

## Acknowledgments
Special thanks to the open-source community and resources that helped in designing this project.
