#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
int E=659;
int D=587;
int C=523;

void setup()
{
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  pinMode( 7 , OUTPUT);
  pinMode( 6 , OUTPUT);
}

void loop()
{
  tone(6,E);
  servo1.write( 1 );
  servo2.write( 180 );
  delay( 1000 );
  tone(6,D);
  servo2.write( 90 );
  servo3.write( 1 );
  delay( 1000 );
  tone(6,C);
  servo3.write( 180 );
  servo1.write( 180 );
  delay( 1000 );
  tone(6,D);
  servo1.write( 90 );
  servo2.write( 1 );
  delay( 1000 );
  for (int i=0;i<3;i++)
  {
    tone(6,E);
    digitalWrite( 7 , HIGH );
    delay( 500 );
    noTone(6);
    digitalWrite( 7 , LOW );
    delay( 250 );
  }
  delay( 1000 );
  for (int i=0;i<3;i++)
  {
    tone(6,D);
    digitalWrite( 7 , HIGH );
    delay( 500 );
    noTone(6);
    digitalWrite( 7 , LOW );
    delay( 250 );
  }
  delay( 1000 );
  for (int i=0;i<3;i++)
  {
    tone(6,E);
    digitalWrite( 7 , HIGH );
    delay( 500 );
    noTone(6);
    digitalWrite( 7 , LOW );
    delay( 250 );
  }
  delay( 1000 );
}


