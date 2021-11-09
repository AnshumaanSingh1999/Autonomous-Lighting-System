const int LEDpin = 8;  
const int photoPIN = A0;
const int PIRpin = 2;    
void setup() {  
  Serial.begin(9600);  
  pinMode(PIRpin, INPUT);  
  pinMode(photoPIN, INPUT);  
  pinMode(LEDpin, OUTPUT);  
}  
void loop() {  
  int sensorStatusphoto = analogRead(photoPIN); 
  int sensorStatepir = digitalRead(2);
  if (sensorStatusphoto <200)  
  {  
    digitalWrite(LEDpin, HIGH); 
  }  
  else  
  {
    if(sensorStatepir == HIGH)
    {
      digitalWrite(LEDpin, HIGH);
    }
    else
    {
      digitalWrite(LEDpin, LOW); 
    }
  }  
}
