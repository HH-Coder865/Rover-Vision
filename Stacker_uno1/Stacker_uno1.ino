#include<Servo.h>
Servo servo;
int ena=11;
int enb=5;
int in1=10,in2=12,in3=7,in4=6;
int trig=4,echo=3;
int getDistance(){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  long time=pulseIn(echo,HIGH);
  return (int)(time*0.034/2);
}
void forward(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in4,LOW);
  digitalWrite(in3,HIGH);
  analogWrite(ena,180);
  analogWrite(enb,180);
}
void stop(){
  digitalWrite(in1,0);
  digitalWrite(in2,LOW);
  digitalWrite(in3,0);
  digitalWrite(in4,LOW);
  analogWrite(ena,0);
  analogWrite(enb,0);
}
void left(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in4,LOW);
  digitalWrite(in3,HIGH);
  analogWrite(ena,180);
  analogWrite(enb,180);
}
void right(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in4,HIGH);
  digitalWrite(in3,LOW);
  analogWrite(ena,180);
  analogWrite(enb,180);
}
void back(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(ena,180);
  analogWrite(enb,180);
}
void setup(){
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600);
  servo.attach(A1);
  servo.write(90);
}
void loop(){
  int d=getDistance(),r,l;
  Serial.println(d);
  delay(1000);
  if(d>30){
    forward();
  }
  else{
    stop();
    delay(500);
    servo.write(160);
    r=getDistance();
    delay(600);
    servo.write(30);
    l=getDistance();
    delay(600);
    servo.write(90);
    delay(200);
    if(r>=l){
      back();
      delay(500);
      right();
      delay(900);
      forward();
    }
    else{
      back();
      delay(500);
      left();
      delay(900);
      forward();
    }
  }
}
