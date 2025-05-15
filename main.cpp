#include <stdio.h>
#include "pico/stdlib.h"
#include "ldr.h"

int main() {
    stdio_init_all();

    LDR lightSensor(26);  // GPIO 26 = ADC0
    lightSensor.init();

    while (true) {
        uint16_t raw = lightSensor.readRaw();
        float voltage = lightSensor.readVoltage();
        printf("Raw ADC: %d\tVoltage: %.2f V\n", raw, voltage);
        sleep_ms(1000);
    }
}
