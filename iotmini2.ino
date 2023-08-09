const int buzzerPin=9;
const int smokeSensorPin=A0;
const int redLed=6;
const int blueLed=5;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzerPin,OUTPUT);
pinMode(smokeSensorPin,INPUT);
pinMode(redLed,OUTPUT);
pinMode(blueLed,OUTPUT);

}

void loop() {
 //put your main code here, to run repeatedly:
  float smokeValue=analogRead(smokeSensorPin);
  //int smokeValue=digitalRead(smokeSensorPin);
 // Serial.println(smokeValue);
  Serial.println(smokeValue);
  delay(1000);

/* if(fireValue==0)
  {
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(blueLed,LOW);
    digitalWrite(redLed,HIGH);
    Serial.print(" FIRE ALERT ! ");
    delay(5000);
    //digitalWrite(redLed2,HIGH);

  }
  else
  {
     digitalWrite(buzzerPin,LOW);
    digitalWrite(blueLed,HIGH);
    digitalWrite(redLed,LOW);
    Serial.print("NO FIRE ! SAFE ZONE");
    //digitalWrite(redLed2,LOW);
  }
  delay(500);
*/

 if(smokeValue>200)
  {
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(blueLed,LOW);
    digitalWrite(redLed,HIGH);
    Serial.println(" FIRE ALERT SMOKE DETECTED ! ");
    delay(5000);

  }
  else
  {
     digitalWrite(buzzerPin,LOW);
    digitalWrite(blueLed,HIGH);
    digitalWrite(redLed,LOW);
    Serial.println("NO FIRE NO SMOKE! SAFE ZONE");
  }
  delay(500);
  
}
