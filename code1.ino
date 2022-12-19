const int buzzer = 13;
int anPin0 = A0, anPin1 = A1, anPin2 = A2, anPin3 = A3, anPin4 = A4, anPin5 = A5;
int val0=0,val1=0, val2 =0,val3 =0, val4 =0, val5 = 0;
int pinA = 6;int pinB = 7;int pinC = 8;int pinD = 9;
int pinE = 10;int pinG = 11;int pinF = 12;
int pinDP = 1;int D1 = 2;int D2 = 3;int D3 = 4; int D4 = 5;
 
 void digit1(){
      digitalWrite(D1, LOW);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);
      }
 
void digit2(){
      digitalWrite(D1, HIGH);
digitalWrite(D2, LOW);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);
      }
 
void digit3(){
      digitalWrite(D1, HIGH);
digitalWrite(D2, HIGH);
digitalWrite(D3, LOW);
digitalWrite(D4, HIGH);
      }
 
void digit4(){
      digitalWrite(D1, HIGH);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, LOW);
      }
 
void zero(){
digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, LOW);
digitalWrite(pinDP, HIGH);
  }
 
  void one(){
digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
digitalWrite(pinDP, LOW);
}
 
void two(){
  digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, LOW);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, LOW);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, LOW);
  }
 
  void three(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, LOW);
    }
 
  void four(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, LOW);
    }
 
  void five(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, LOW);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, LOW);
    }
 
  void six(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, LOW);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, LOW);
    }
 
  void seven(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
digitalWrite(pinDP, LOW);
    }
 
  void eight(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, LOW);
    }
 
  void nine(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, LOW);
    }
 
void setup() 
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT); 
  pinMode(pinDP, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}
 
 
void loop() {
 
  val0 = analogRead(anPin0);
  val1 = analogRead(anPin1);
  val2 = analogRead(anPin2);
  val3 = analogRead(anPin3);
  val4 = analogRead(anPin4);
  val5 = analogRead(anPin5);
 
 
if (val0>350){
  tone(buzzer,200);
  digit1();zero();delay(1);
  digit2();two();delay(1);
  digit3();zero();delay(1);
  digit4();zero();delay(1);
  }
else if (val1>350){
  tone(buzzer,400);
  digit1();zero();delay(1);
  digit2();four();delay(1);
  digit3();zero();delay(1);
  digit4();zero();delay(1);
  }
else if (val2>350){
  tone(buzzer,600);
  digit1();zero();delay(1);
  digit2();six();delay(1);
  digit3();zero();delay(1);
  digit4();zero();delay(1);
  }
else if (val3>350){
  tone(buzzer,800);
  digit1();zero();delay(1);
  digit2();eight();delay(1);
  digit3();zero();delay(1);
  digit4();zero();delay(1);
  }
else if (val4>350){
  tone(buzzer,1000);
  digit1();one();delay(1);
  digit2();zero();delay(1);
  digit3();zero();delay(1);
  digit4();zero();delay(1);
  }
else if (val5>350){
  tone(buzzer,2000);
  digit1();two();delay(1);
  digit2();zero();delay(1);
  digit3();zero();delay(1);
  digit4();zero();delay(1);
  }
 
else {
  noTone(buzzer);
  digit1();zero();delay(1);
  digit2();zero();delay(1);
  digit3();zero();delay(1);
  digit4();zero();delay(1);
}    
}
