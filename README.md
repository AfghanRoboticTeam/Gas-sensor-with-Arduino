Gas-Leak-Detection-Alarm-System-using-MQ2-Gas-Sensor-Arduino
- Use the diagram to connect the components accordingly
- Copy the code and upload it to the arduino

Overview
In this project, we will build Gas Leak Detection & Alarm System using MQ2 Gas Sensor and Arduino UNO Board. The MQ2 sensor is a versatile gas sensor capable of detecting a wide range of gases as well as smoke.

This initiative is centered on creating a mock-up of a gas leak detection system utilizing an Arduino Uno as the core controller. It employs an MQ2 gas sensor alongside an RGB LED to monitor gas levels persistently. When the detected gas levels exceed a certain preset limit, an alert is triggered via a buzzer, and the RGB LED glows red to indicate danger. If the gas levels are within safe limits, below the set threshold, the system keeps the alarm silent and the LED displays a green light, signaling safety.

Technical Specifications
Target Gases: LPG, Propane, Methane, Alcohol, Hydrogen, Smoke
Operating Voltage: Typically 5V (with a preheat time of over 24 hours for initial use)
Load Resistance: 20 KΩ
Heater Resistance: 33Ω ± 5%
Sensing Resistance: 10 KΩ – 60 KΩ
Heating consumption: <800mw
Sensitivity: High to gases in the scope of detection
Concentration Range: 200 – 10000ppm
Preheat Duration: 20 seconds (minimum)
Operating Temperature: -10 to 50 degrees Celsius

Hardware Connection
The connection between Arduino and MQ2 Sensor is very simple.
VCC: Connect the VCC pin of the MQ-2 sensor module to the 5V out pin on the Arduino.
GND: Connect the GND pin to the ground pin on the Arduino.
A0: Connect the analog output pin (A0) of the MQ-2 sensor to the A0 Pin of the Arduino.
You can assemble the circuit on breadboard and use jumper wires for connection.

Connect the Red and Green LED to digital pins 5 and 6 respectively via 330-ohm resistor. Similarly connect a 5V Buzzer to the digital Pin 2 of the Arduino Board.
Assemble the circuit on a breadboard as per the circuit diagram.
