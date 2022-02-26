//Quanto maior a temperatura, maior a velocidade de rotação do motor

int sensor = A0;
int motor = 3;
int valorTemp = 0;
int pwm = 0;

void setup()
{
  pinMode(motor, OUTPUT);
}

void loop()
{
  valorTemp = analogRead (sensor);
  pwm = map (valorTemp, 0, 1023, 0, 255);
  analogWrite (motor, pwm);
}