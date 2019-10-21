void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  int c = analogRead(A0);
  if(digitalRead(2)==HIGH)
  {
    if(c<500)
    {
     digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
    
    }
    
    
 else 
 {
      if(c>500)
    {
      digitalWrite(10, HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }
    else
    {
     digitalWrite(10, LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    
      }
 }
  }
   else
   {
   digitalWrite(10, LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
   
    } 
   }
  
