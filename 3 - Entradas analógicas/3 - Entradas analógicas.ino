int pot = A0;
int led = 3;
int valorPot = 0;
int pwm = 0;

void setup()
{
  pinMode (led, OUTPUT);
}

void loop()
{
  valorPot = analogRead (pot);
  pwm = map (valorPot, 0, 1023, 0, 255);
  analogWrite (led, pwm);
}