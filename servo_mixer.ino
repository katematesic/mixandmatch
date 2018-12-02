#include <Servo.h>

Servo myservo1;

int pot1val;
int potpin1 = A0;  // defines pin used for the potentiometer
int servoVal;

void setup()
{
 myservo1.attach(6);  // defines pin used for the servo
}


void loop()
{
 pot1val = analogRead(potpin1);
 servoVal = map(pot1val, 0, 1023, 76, 104);
 myservo1.write(servoVal);
 delay(20);  
}
