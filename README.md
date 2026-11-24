# Automatic Light Control Using Arduino and LDR

## 📌 Project Description

This project implements an Automatic Light Control System using an Arduino Uno and an LDR (Light Dependent Resistor) sensor.

The LDR detects the surrounding light intensity and sends sensor readings to the Arduino. Based on the detected light level, the Arduino automatically controls an LED.

- When the environment is dark, the LED turns ON.
- When sufficient light is available, the LED turns OFF.

This project demonstrates the basic interfacing of sensors and actuators with an Arduino.

## 🎯 Objectives

- Understand LDR sensor interfacing with Arduino.
- Read analog sensor values using Arduino.
- Control an LED based on light intensity.
- Understand basic sensor and actuator applications.

## 🛠️ Components Used

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| LDR Sensor | 1 |
| LED | 1 |
| 10kΩ Resistor | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |

**Note:** The project was implemented using the Tinkercad virtual circuit simulator.

## 🔌 Circuit Connections

| Arduino Pin | Connection |
|---|---|
| 5V | LDR voltage divider |
| GND | Ground connection |
| A0 | LDR sensor output |
| D9 | LED through 220Ω resistor |

The LDR and 10kΩ resistor form a voltage divider to provide an analog input to the Arduino.

## ⚙️ Working Principle

1. The LDR senses the surrounding light intensity.
2. Arduino reads the analog value through pin A0.
3. The sensor value is compared with a predefined threshold of 500.
4. If the sensor value is below 500, the LED turns ON.
5. Otherwise, the LED turns OFF.
6. The sensor reading is updated every 500 milliseconds.

## 🧪 Simulation and Testing

The circuit was created and tested using Tinkercad Circuits.

**Expected Results:**

- Dark environment: LED ON.
- Bright environment: LED OFF.
- Sensor readings are displayed in the Serial Monitor.

## 🌍 Applications

- Automatic street lighting.
- Smart home lighting systems.
- Energy-saving lighting systems.
- Automatic garden lights.

## 🚀 Future Improvements

- Control multiple LEDs based on light intensity.
- Use a relay to control larger lights.
- Add an LCD to display light intensity.
- Implement automatic outdoor lighting.

## 🧰 Tools Used

