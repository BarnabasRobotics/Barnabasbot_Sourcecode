int E=659;
int D=587;
int C=523;
void setup()
{
  pinMode(6,OUTPUT);
}

void loop()
{
  tone(6,E);
  delay( 1000 );
  tone(6,D);
  delay( 1000 );
  tone(6,C);
  delay( 1000 );
  tone(6,D);
  delay( 1000 );
  for (int i=0;i<3;i++)
  {
    tone(6,E);
    delay( 500 );
    noTone(6);
    delay(250);
  }
  delay( 1000 );
  for (int i=0;i<3;i++)
  {
    tone(6,D);
    delay( 500 );
    noTone(6);
    delay(250);
  }
  delay( 1000 );
  for (int i=0;i<3;i++)
  {
    tone(6,E);
    delay( 500 );
    noTone(6);
    delay(250);
  }
  delay( 1000 );
}


