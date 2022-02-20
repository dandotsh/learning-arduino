int led = 8;
int botao1 = 3;
int estadoBotao1 = 0;
int botao2 = 2;
int estadoBotao2 = 0;

void setup()
{
  pinMode (led, OUTPUT);
  pinMode (botao1, INPUT);  
  pinMode (botao2, INPUT);
}

void loop()
{
  estadoBotao1 = digitalRead (botao1);
  estadoBotao2 = digitalRead (botao2);
  
  if (estadoBotao1 == HIGH)
  {
   digitalWrite (led, HIGH);
  }

  if (estadoBotao2 == HIGH)
  {
   digitalWrite (led, LOW);
  }   
}