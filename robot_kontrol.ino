
#include <Deneyap_Servo.h>          
   
Servo myservo1;                    
Servo myservo2;

int potpin = A0;                  
int val1; 
int potpin1 = A1;                  
int val2; 
void setup() {  
  myservo1.attach(D5);              
  pinMode(A0, INPUT);               
myservo2.attach(D6);              
  pinMode(A1, INPUT);               


}

void loop() { 
  val1 = analogRead(potpin);         
  val1 = map(val1, 0, 4095, 0, 360);  
  myservo1.write(val1/2);               
  delay(15);
  val2 = analogRead(potpin1);         
  val2 = map(val2, 0, 4095, 0, 360);  
  myservo2.write(val2/2);               
  delay(15);




}
