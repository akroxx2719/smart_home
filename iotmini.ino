const int buzzerPin=9;
const int fireSensorPin=8;
const int redLed=6;
const int blueLed=5;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzerPin,OUTPUT);
pinMode(fireSensorPin,INPUT);
pinMode(redLed,OUTPUT);
pinMode(blueLed,OUTPUT);

}

void loop() {
 //put your main code here, to run repeatedly:
  int fireValue=digitalRead(fireSensorPin);
  //int smokeValue=digitalRead(smokeSensorPin);
 // Serial.println(smokeValue);
  Serial.println(fireValue);
  delay(1000);
/* if(fireValue==0 || smokeValue==0)
  {
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(blueLed,LOW);
    digitalWrite(redLed1,HIGH);
    digitalWrite(redLed2,HIGH);
    delay(5000);
  

  }
  else
  {
     digitalWrite(buzzerPin,LOW);
    digitalWrite(blueLed,HIGH);
    digitalWrite(redLed1,LOW);
    digitalWrite(redLed2,LOW);
  }
  delay(500);

*/
  if(fireValue==0)
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


  /*if(smokeValue==1)
  {
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(blueLed,LOW);
   // digitalWrite(redLed1,HIGH);
    digitalWrite(redLed2,HIGH);
    delay(5000);

  }
  else
  {
     digitalWrite(buzzerPin,LOW);
    digitalWrite(blueLed,HIGH);
   // digitalWrite(redLed1,LOW);
    digitalWrite(redLed2,LOW);
    delay(5000);
  }*/
  

}
