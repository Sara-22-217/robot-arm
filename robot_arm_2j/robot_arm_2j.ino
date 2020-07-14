#include <Servo.h>
Servo moto1;
Servo moto2;
int Le1=40;//lengh of arm1
int Le2=25;//lengh of arm2
float T1=90;//angle of moto1 in degree
float T2=45;//angle of moto3 in degree
float x,y,Q1,Q2;//variable for equation
void setup(){
  moto1.attach(11);
  moto2.attach(12);
}
void loop(){
  moto1.write(T1);
  moto2.write(T2);
  Q1=(T1/180)*PI;//angle of moto1 in rad
  Q2=(T2/180)*PI;//angle of moto2 in rad
  x=(Le1*cos(Q1))+(Le2*cos(Q1+Q2));
  y=(Le1*sin(Q1))+(Le2*sin(Q1+Q2));
  delay(5000);
}
