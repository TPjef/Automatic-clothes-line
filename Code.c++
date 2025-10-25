#include <Servo.h> 
Servo s1;
int val = 0 ;

void setup()
{
    Serial.begin(9600);
    pinMode(9,INPUT); 
    s1.attach(8);        
}

void loop() 
{
   val = digitalRead(9);  
  Serial.println(val);    
  delay(100);
  
  if(val == 0 )
  {
    s1.write(90);  
    delay(500);  
  } 

   if(val == 1 )
  {
    s1.write(0);    

   
  }
  }
