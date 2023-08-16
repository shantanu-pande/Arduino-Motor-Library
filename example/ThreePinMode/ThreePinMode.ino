#include<Motor.h>

//give arguement as (IN1, IN2, EN)
//only EN pin need to be PWM
Motor left(7,8,9); 
Motor right(2,4,5); 

void setup()
{   
    //Initalize the motors
    left.begin();
    right.begin();
}

void loop()
{
    left.forward(255); //PWM value
    right.reverse(255); //PWM value
    delay(5000);

    left.reverse(128);
    right.forward(128);
    delay(5000);

    //Stops the motor
    left.stop();  
    right.stop();
    delay(5000);
}