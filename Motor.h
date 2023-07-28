#ifndef Motor_h
#define Motor_h
#include "Arduino.h"

class Motor
{
private:
    uint8_t _IN1 , _IN2;
public:
    Motor(uint8_t IN1, uint8_t IN2);
    ~Motor();
    void begin(); 
    void forward(uint8_t PWM);
    void reverse(uint8_t PWM);
    void stop();
};

#endif