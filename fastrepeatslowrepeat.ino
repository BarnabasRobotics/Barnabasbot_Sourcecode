void setup()
{
  pinMode( 7 , OUTPUT);
}

void loop()
{
  for (int i=0;i<5;i++)
  {
    digitalWrite( 7 , HIGH );
    delay( 1000 );
    digitalWrite( 7 , LOW );
    delay( 1000 );
  }
  for (int i=0;i<5;i++)
  {
    digitalWrite( 7 , HIGH );
    delay( 200 );
    digitalWrite( 7 , LOW );
    delay( 200 );
  }
}


