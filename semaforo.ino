//constantes do tipo inteiro, valores nao variaveis
const int vermelho = 10;
const int amarelo = 9;
const int verde = 8;
 
//funcao setup, definicao dos modos dos pinos como saida
void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}
 
//funcao loop
void loop() {
  //iniciando farol em vermelho
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
 
  delay(5000); //espera 5 segundos
 
  //mudando farol para verde
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
  
  delay(5000); //espera 5 segundos 
  
  //mudando farol para amarelo
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
 
  delay(2000);//espera 2 segundos
}