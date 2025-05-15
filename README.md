# LDR-ADC-LIBRARY
# LDR ADC Library for Raspberry Pi Pico

This project demonstrates how to read analog light intensity using an LDR sensor connected to the Raspberry Pi Pico's inbuilt ADC.

## Features
- Modular C++ library
- Analog voltage conversion
- Works with GPIO 26 (ADC0)

## Circuit

LDR and 10kΩ resistor in voltage divider:
- One end of LDR → 3.3V
- Middle point → GPIO 26
- Other end of resistor → GND

## 📦 Build Instructions

```bash
mkdir build
cd build
cmake ..
make
