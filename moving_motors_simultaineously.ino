#include <Servo.h>

Servo servo_1;
Servo servo_2;
Servo servo_3;

void setup()
{
  servo_1.attach(9);
  servo_2.attach(10);
  servo_3.attach(11);
}

void loop()
{
  servo_1.write( 0 );
  servo_2.write( 0 );
  servo_3.write( 0 );
  delay( 1000 );
  servo_1.write( 180 );
  servo_2.write( 180 );
  servo_3.write( 180 );
  delay( 1000 );
}


