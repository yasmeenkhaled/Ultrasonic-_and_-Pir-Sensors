int trig =8;
int echo =7;
int redled=3;
int greenled=5;
int distance;
long duration;
int condi= 30;
int buzzerpin = 12;
int inputPin = 4; 
int val=0;
int pushbuttn=2;
//int pirState = LOW; 



void setup() {
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  pinMode(redled , OUTPUT);
  pinMode(greenled , OUTPUT);
  pinMode(buzzerpin , OUTPUT);
  pinMode(inputPin , INPUT);
  pinMode(pushbuttn , INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trig , LOW);
  delayMicroseconds(2);
   digitalWrite(trig , HIGH);
  delayMicroseconds(10);
   digitalWrite(trig , LOW);
  
  duration = pulseIn(echo , HIGH);
  distance = duration * 0.034/2;
  int read = digitalRead(pushbuttn);
  
  if(distance < condi && val == LOW)
  {
    Serial.println("Motion not  detected");
    digitalWrite(redled , HIGH);
    //delay(2000);
    // digitalWrite(redled , LOW);
    //delay(20);
     digitalWrite(greenled ,HIGH );
    delay(2000);
    //digitalWrite(greenled , LOW);
    //delay(20);
    
  }
  else
  {
     digitalWrite(buzzerpin , HIGH);
    delay(2000);
    digitalWrite(buzzerpin , LOW);
    delay(2000);
     digitalWrite(redled , LOW);
     digitalWrite(greenled ,LOW );
    Serial.println("Motion detected");
    
  }
  
  
Serial.print("Distance: ");
Serial.println(distance);
  
  
}
                
                
                
        
                
         
  
  
