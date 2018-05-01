#include <Servo.h>
Servo devaservo;
int   xAcc = A0;
int   yAcc = A1;
int   zAcc = A2;
int servopin=9;
void setup(){
Serial.begin(9600);
pinMode(xAcc,INPUT);
pinMode(yAcc,INPUT);
pinMode(zAcc,INPUT);
devaservo.attach(servopin);
}
void loop()
{
int a = analogRead(xAcc);
int b = analogRead(yAcc);
int c = analogRead(zAcc);
a=map(a,250,400,0,180);
b=map(b,250,400,0,180);
c=map(c,250,400,0,180);
devaservo.write(a);
  Serial.print(" xAcc ");
  Serial.print(a);
  Serial.print(" yAcc ");
  Serial.println(b);
  Serial.print(" zAcc ");
  Serial.print(b);
  Serial.println(" ");
  delay(250);
}
