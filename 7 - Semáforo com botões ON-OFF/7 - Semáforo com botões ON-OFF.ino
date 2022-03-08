int ledVermelho = 10;
int ledAmarelo = 9;
int ledVerde = 8;
int botao1 = 2;
int estadobotao1 = 0;
int botao2 = 3;
int estadobotao2 = 0;

void setup()
{
  pinMode (ledVermelho, OUTPUT);
  pinMode (ledAmarelo, OUTPUT);
  pinMode (ledVerde, OUTPUT);
  pinMode (botao1, INPUT);  
  pinMode (botao2, INPUT);
}

void loop()
{
  estadobotao1 = digitalRead (botao1);
  estadobotao2 = digitalRead (botao2);
  
  if (estadobotao1 == HIGH)
  {
   while (1) //1 indica que o laço é verdadeiro
   {
    digitalWrite (ledVermelho, HIGH);
    delay (1000);
    digitalWrite (ledVermelho, LOW);
    
    digitalWrite (ledVerde, HIGH);
    delay (1000);
    digitalWrite (ledVerde, LOW);
    
    digitalWrite (ledAmarelo, HIGH);
    delay (500);
    digitalWrite (ledAmarelo, LOW);
     
    estadobotao2 = digitalRead (botao2);
    
    if (estadobotao2 == HIGH)
    {
     goto desligar;
    }
   }  
  }  

  if (estadobotao2 == HIGH)
  {
   desligar:
   digitalWrite (ledVermelho, LOW);
   digitalWrite (ledVerde, LOW);
   digitalWrite (ledAmarelo, LOW);
  }   
}