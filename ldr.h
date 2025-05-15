#ifndef LDR_H
#define LDR_H

class LDR {
public:
    LDR(uint adc_pin);
    void init();
    uint16_t readRaw();
    float readVoltage();

private:
    uint adc;
};

#endif
