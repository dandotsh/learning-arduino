int ledVermelho = 4;
int ledAmarelo = 3;
int ledVerde = 2;

void setup()
{
  pinMode (ledVermelho, OUTPUT);
  pinMode (ledAmarelo, OUTPUT);
  pinMode (ledVerde, OUTPUT);
}

void loop()
{
  digitalWrite (ledVermelho, HIGH);
  delay(2000);
  digitalWrite (ledVermelho, LOW);
  
  digitalWrite (ledVerde, HIGH);
  delay(2000);
  digitalWrite (ledVerde, LOW);
  
  digitalWrite (ledAmarelo, HIGH);
  delay(500);
  digitalWrite (ledAmarelo, LOW);

}
