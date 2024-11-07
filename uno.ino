// INCLUSÃO DE BIBLIOTECAS
#include <Servo.h>

int M = 5;
// DEFINICIÇÃO DE PINOS DO SLAVE
#define pinS0 3
#define pinS1 4
#define pinS2 5
#define pinS3 6
#define pinOut 7
#define pinLED 8
#define pinBuzzer 9

//melodia do Super Mario World
int melodia[] = {660,660,660,510,660,770,380,510,380,320,440,480,450,430,380,660,760,860,700,760,660,520,580,480,510,380,320,440,480,450,430,380,660,760,860,700,760,660,520,580,480,500,760,720,680,620,650,380,430,500,430,500,570,500,760,720,680,620,650,1020,1020,1020,380,500,760,720,680,620,650,380,430,500,430,500,570,585,550,500,380,500,500,500,500,760,720,680,620,650,380,430,500,430,500,570,500,760,720,680,620,650,1020,1020,1020,380,500,760,720,680,620,650,380,430,500,430,500,570,585,550,500,380,500,500,500,500,500,500,500,580,660,500,430,380,500,500,500,500,580,660,870,760,500,500,500,500,580,660,500,430,380,660,660,660,510,660,770,380};

//duraçao de cada nota em Milisegundos
int duracaodasnotas[] = {100,100,100,100,100,100,100,100,100,100,100,80,100,100,100,80,50,100,80,50,80,80,80,80,100,100,100,100,80,100,100,100,80,50,100,80,50,80,80,80,80,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,150,200,80,80,80,100,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,150,200,80,80,80,100,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,100,100,100,60,80,60,80,80,80,80,80,80,60,80,60,80,80,80,80,80,60,80,60,80,80,80,80,80,80,100,100,100,100,100,100,100};


//DECLARAÇÃO DE VARIÁVEIS
unsigned int valorVermelho = 0;
unsigned int valorVerde = 0;
unsigned int valorAzul = 0;
unsigned int valorBranco = 0;
unsigned int valorPreto = 0;
unsigned int valorAmarelo = 0;
int a = 0;
int b = 0;
int c = 0;


void detectaCor();

// INSTANCIANDO OBJETOS
Servo servo_2;
Servo servo_10;
Servo servo_11;
Servo servo_12;
Servo servo_13;

void setup() {

  // ENVIA O pinMode PARA O SLAVE
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinS0, OUTPUT);
  pinMode(pinS1, OUTPUT);
  pinMode(pinS2, OUTPUT);
  pinMode(pinS3, OUTPUT);
  pinMode(pinLED, OUTPUT);
  pinMode(pinOut, INPUT);
  digitalWrite(pinS0, HIGH);
  digitalWrite(pinS1, LOW);
  
  delay(2000);
  
  //Liga LED

  digitalWrite(pinLED, HIGH);

  Serial.begin(9600);

  //DEFINIÇÃO DA AÇÃO E CONFIGURAÇÃO DOS PINOS DO MASTER
  servo_2.attach(2, 500, 2500);
  servo_10.attach(10, 500, 2500);
  servo_11.attach(11, 500, 2500);
  servo_12.attach(12, 500, 2500);
  servo_13.attach(13, 500, 2500);

  if (M == 0){
    servo_2.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_10.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_11.write(180);
    delay(2000);
    servo_12.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_13.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
  }
  if (M == 1){
    servo_2.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_10.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_11.write(180);
    delay(2000);
    servo_12.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_13.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
  }
  if (M == 2){
    servo_2.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_10.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_11.write(180);
    delay(2000);
    servo_12.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_13.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
  }
   if (M == 3){
    servo_2.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_10.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_11.write(0);
    delay(2000);
    servo_12.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_13.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
  }
   if (M == 4){
    servo_2.write(180);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_10.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_11.write(0);
    delay(2000);
    servo_12.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_13.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
  }
   if (M == 5){
    servo_2.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_10.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_11.write(0);
    delay(2000);
    servo_12.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
    servo_13.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
  }

}

void loop() {
  
  //Detecta a cor
  detectaCor();

  //VERIFICAR SE A SOMA DAS FICHAS É IGUAL AO NÚMERO DE DEDOS LEVANTADA
  if ((valorVermelho < valorAzul) && //VERIFICA SE A COR VERMELHA FOI DETECTADA
      (valorVermelho < valorVerde) &&
      (valorBranco < 100) &&
      (valorBranco > 30)){
    Serial.println("Vermelha");
    c = 1;
    delay (1000); 
  } else if ((valorAzul < valorVermelho) &&  //Verifica se a cor azul foi detectada
             (valorAzul < valorVerde) &&
             (valorBranco < 100)&&
             (valorBranco > 20)) {
    Serial.println("Azul");
    c = 0;
    delay (1000);
  } else if ((valorVerde < valorVermelho) &&  //Verifica se a cor verde foi detectada
             (valorVerde < valorAzul) &&
             (valorBranco < 100)) {
    Serial.println("Verde");
    c = 3;
  } else if (valorBranco < 20) {
    Serial.println("Branca");
    c = 4;
    Serial.println(c);
    delay(1000);
  } else if (valorBranco > 100){
    Serial.println("Preta");
    delay(1000);
    c = 5;
    delay(1000);
  } else if ((valorBranco < 30 ) &&
             (valorVerde < valorAzul ) &&
             (valorVermelho < valorAzul )){
    Serial.println("Amarela");
    c = 2;
    delay(1000);
  }
  if (c == M){
  for (int nota = 0; nota < 156; nota++) {
 
 int duracaodanota = duracaodasnotas[nota];
 tone(pinBuzzer, melodia[nota],duracaodanota);
 //pausa depois das notas
 int pausadepoisdasnotas[] ={150,300,300,100,300,550,575,450,400,500,300,330,150,300,200,200,150,300,150,350,300,150,150,500,450,400,500,300,330,150,300,200,200,150,300,150,350,300,150,150,500,300,100,150,150,300,300,150,150,300,150,100,220,300,100,150,150,300,300,300,150,300,300,300,100,150,150,300,300,150,150,300,150,100,420,450,420,360,300,300,150,300,300,100,150,150,300,300,150,150,300,150,100,220,300,100,150,150,300,300,300,150,300,300,300,100,150,150,300,300,150,150,300,150,100,420,450,420,360,300,300,150,300,150,300,350,150,350,150,300,150,600,150,300,350,150,150,550,325,600,150,300,350,150,350,150,300,150,600,150,300,300,100,300,550,575};
 delay(pausadepoisdasnotas[nota]);}
 
 noTone(pinBuzzer); 
    } else {
    digitalWrite(pinBuzzer, HIGH);
    delay(1000);
    digitalWrite(pinBuzzer, LOW);
    delay(1000);
    digitalWrite(pinBuzzer, HIGH);
    delay(1000);
    digitalWrite(pinBuzzer, LOW);
    delay(1000);
    digitalWrite(pinBuzzer, HIGH);
    delay(1000);
    digitalWrite(pinBuzzer, LOW);
    delay(1000);
  } 

  Serial.println();
}
// *********** Função de leitura so sensor de cor ********************
void detectaCor() {
  //Vermelho
  digitalWrite(pinS2, LOW);
  digitalWrite(pinS3, LOW);
  valorVermelho = pulseIn(pinOut, digitalRead(pinOut) == HIGH ? LOW : HIGH);
  
  //Sem filtro
  digitalWrite(pinS2, HIGH);
  valorBranco = pulseIn(pinOut, digitalRead(pinOut) == HIGH ? LOW : HIGH);

  //Azul
  digitalWrite(pinS2, LOW);
  digitalWrite(pinS3, HIGH);
  valorAzul = pulseIn(pinOut, digitalRead(pinOut) == HIGH ? LOW : HIGH);

  //Verde
  digitalWrite(pinS2, HIGH);
  valorVerde = pulseIn(pinOut, digitalRead(pinOut) == HIGH ? LOW : HIGH);
}