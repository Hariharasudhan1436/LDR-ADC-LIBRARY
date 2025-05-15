#include "ldr.h"
#include "hardware/adc.h"

LDR::LDR(uint adc_pin) {
    adc = adc_pin;
}

void LDR::init() {
    adc_init();
    adc_gpio_init(adc); // Enable ADC function on GPIO
}

uint16_t LDR::readRaw() {
    adc_select_input(adc - 26); // ADC0 = GPIO26, ADC1 = GPIO27, etc.
    return adc_read();
}

float LDR::readVoltage() {
    return readRaw() * 3.3f / 4095.0f; // Convert to voltage
}
