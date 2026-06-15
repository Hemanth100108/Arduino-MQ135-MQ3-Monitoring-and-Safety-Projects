# Arduino MQ135 MQ3 Monitoring and Safety Projects

## Objective

To develop and implement a collection of Arduino-based monitoring and safety projects that demonstrate air quality monitoring, alcohol detection, environmental safety systems, access control mechanisms, sensor dashboards, and real-time alert generation.

This repository contains a collection of Arduino projects developed using MQ135 Air Quality Sensor, MQ3 Alcohol Sensor, OLED/LCD Displays, LEDs, Buzzers, and Traffic Light Indicators.

---

## Projects Included

1. MQ135 Air Quality Monitor
2. MQ3 Alcohol Detection System
3. Environmental Safety Monitor
4. Alcohol Detection Access Control
5. MQ135 MQ3 Monitoring Dashboard

---

## Components Used

### Hardware

* Arduino Uno
* MQ135 Air Quality Sensor
* MQ3 Alcohol Sensor
* SSD1306 OLED Display / 16×2 LCD
* LEDs (Red, Yellow, Green)
* Active Buzzer
* Breadboard
* Jumper Wires
* USB Cable

### Software

* Arduino IDE
* Wire Library
* Adafruit GFX Library
* Adafruit SSD1306 Library
* LiquidCrystal_I2C Library

---

### MQ135 Connections

| MQ135 Pin | Arduino Uno |
| --------- | ----------- |
| VCC       | 5V          |
| GND       | GND         |
| AOUT      | A0          |

### MQ3 Connections

| MQ3 Pin | Arduino Uno |
| ------- | ----------- |
| VCC     | 5V          |
| GND     | GND         |
| AOUT    | A1          |

### OLED Connections

| OLED Pin | Arduino Uno |
| -------- | ----------- |
| VCC      | 5V          |
| GND      | GND         |
| SDA      | A4          |
| SCL      | A5          |

### LCD Connections (I2C)

| LCD Pin | Arduino Uno |
| ------- | ----------- |
| VCC     | 5V          |
| GND     | GND         |
| SDA     | A4          |
| SCL     | A5          |

### Traffic Light LEDs

| LED        | Arduino Pin |
| ---------- | ----------- |
| Green LED  | D4          |
| Yellow LED | D5          |
| Red LED    | D6          |

### Buzzer Connection

| Buzzer Pin   | Arduino Pin |
| ------------ | ----------- |
| Positive (+) | D8          |
| Negative (-) | GND         |

### Circuit Images

(Add your circuit images here)

---

## Code Explanation

### Project 1 – MQ135 Air Quality Monitor

* Reads air quality values from the MQ135 sensor.
* Displays air quality data in real time.
* Indicates environmental conditions based on sensor readings.

### Project 2 – MQ3 Alcohol Detection System

* Detects alcohol concentration using the MQ3 sensor.
* Displays alcohol sensor values.
* Generates alerts when alcohol levels exceed a threshold.

### Project 3 – Environmental Safety Monitor

* Monitors both air quality and alcohol levels.
* Evaluates environmental safety conditions.
* Activates LEDs and buzzer alerts when unsafe conditions are detected.

### Project 4 – Alcohol Detection Access Control

* Implements a safety lock mechanism based on alcohol detection.
* Allows or restricts access according to sensor readings.
* Provides visual and audible status indications.

### Project 5 – MQ135 MQ3 Monitoring Dashboard

* Displays MQ135 and MQ3 readings simultaneously.
* Shows current system status such as SAFE or WARNING.
* Updates sensor information in real time on OLED/LCD displays.

---

## Output Images

### MQ135 Air Quality Monitor

<img width="1600" height="1200" alt="WhatsApp Image 2026-06-15 at 6 57 18 AM" src="https://github.com/user-attachments/assets/5975df65-5353-409a-8282-eb7ec0e2756a" />
<img width="1600" height="1200" alt="WhatsApp Image 2026-06-15 at 6 57 18 AM (1)" src="https://github.com/user-attachments/assets/129c0584-012d-437c-964d-6888effb7ac3" />
<img width="1600" height="1200" alt="WhatsApp Image 2026-06-15 at 6 57 18 AM (2)" src="https://github.com/user-attachments/assets/9e0b6b8c-d885-4127-8af4-0b8649d6e993" />


### MQ3 Alcohol Detection System

<img width="1600" height="1200" alt="WhatsApp Image 2026-06-15 at 6 57 20 AM" src="https://github.com/user-attachments/assets/f6ee31a1-b3ce-4313-affd-45a60d688b68" />
<img width="1600" height="1200" alt="WhatsApp Image 2026-06-15 at 6 57 19 AM" src="https://github.com/user-attachments/assets/f15f6ce7-600e-456d-ac03-fa2f73d425b5" />


### Environmental Safety Monitor

<img width="1200" height="1600" alt="WhatsApp Image 2026-06-15 at 6 57 20 AM" src="https://github.com/user-attachments/assets/250bd749-efad-459d-8b82-37d737c920d0" />


### Alcohol Detection Access Control

<img width="1600" height="1200" alt="WhatsApp Image 2026-06-15 at 6 57 21 AM" src="https://github.com/user-attachments/assets/56418c07-3e31-43b8-955a-0833ae091cc4" />

### MQ135 MQ3 Monitoring Dashboard

<img width="1600" height="1200" alt="WhatsApp Image 2026-06-15 at 6 57 21 AM" src="https://github.com/user-attachments/assets/6a4c9330-a6fc-4b8e-aa6e-46339a27d872" />

---

## Learning Outcome

Through these projects, the following concepts were learned:

* Arduino Programming Fundamentals
* MQ135 Air Quality Sensor Interfacing
* MQ3 Alcohol Sensor Interfacing
* Analog Sensor Data Acquisition
* Air Quality Monitoring Systems
* Alcohol Detection Applications
* Environmental Safety System Design
* Access Control Logic
* OLED and LCD Display Interfacing
* Traffic Light Indicator Implementation
* Buzzer Alert Systems
* Threshold-Based Decision Making
* Real-Time Dashboard Development
* Embedded Systems Programming
* Hardware and Software Integration

**Hemanth A S
