#include "Motor.h"


Motor::Motor(uint8_t IN1, uint8_t IN2, uint8_t EN)
{
    _IN1 = IN1; _IN2 = IN2; _EN = EN;
    IS_EN = true;
}

Motor::Motor(uint8_t IN1, uint8_t IN2)
{
    _IN1 = IN1; _IN2 = IN2;
    IS_EN = false;
}

void Motor::begin()
{
    if(IS_EN)
    {
        pinMode(_IN1, OUTPUT);
        pinMode(_IN2, OUTPUT);
        pinMode(_EN, OUTPUT);
    }

    else
    {
        pinMode(_IN1, OUTPUT);
        pinMode(_IN2, OUTPUT);
    }
}

void Motor::forward(uint8_t PWM)
{   
    if(IS_EN)
    {   
        analogWrite(_EN, PWM);
        digitalWrite(_IN1, HIGH);
        digitalWrite(_IN2, LOW);
    }
    else
    {
        analogWrite(_IN1, PWM);
        digitalWrite(_IN2, LOW);
    }
}

void Motor::reverse(uint8_t PWM)
{
    if(IS_EN)
    {   
        analogWrite(_EN, PWM);
        digitalWrite(_IN1, LOW);
        digitalWrite(_IN2, HIGH);
    }
    else
    {
        analogWrite(_IN2, PWM);
        digitalWrite(_IN1, LOW);
    }

}

void Motor::stop()
{   
    digitalWrite(_IN1, LOW);
    digitalWrite(_IN2, LOW);
    if(IS_EN) digitalWrite(_EN, LOW);
}

Motor::~Motor()
{
}