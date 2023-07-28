#include "Motor.h"

Motor::Motor(uint8_t IN1, uint8_t IN2)
{
    _IN1 = IN1; _IN2 = IN2;
}

void Motor::begin(){
    pinMode(_IN1, OUTPUT);
    pinMode(_IN2, OUTPUT);
}

void Motor::forward(uint8_t PWM)
{
    analogWrite(_IN1, PWM);
    digitalWrite(_IN2, LOW);
}

void Motor::reverse(uint8_t PWM)
{
    analogWrite(_IN2, PWM);
    digitalWrite(_IN1, LOW);

}

void Motor::stop(){
    digitalWrite(_IN1, LOW);
    digitalWrite(_IN2, LOW);
}

Motor::~Motor()
{
}