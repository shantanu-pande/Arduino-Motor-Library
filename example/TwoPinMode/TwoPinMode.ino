#include<Motor.h>

//give arguement as (IN1, IN2)
//both pins i.e. IN1 and IN2 need to be PWM
Motor left(3,5); 
Motor right(6,9); 

void setup()
{   
    //Initalize the motors
    left.begin();
    right.begin();
}

void loop()
{
    left.forward(255); //PWM value
    right.reverse(255);

    delay(5000);

    left.reverse(128);
    right.forward(128);

    delay(5000);
    //Stops the motor
    left.stop();  
    right.stop(); 
}