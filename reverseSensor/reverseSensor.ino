const int sendsorPin = 9;
const int receivsorPin=10;
const int buzzPin=11;
const int nearLed=1;
const int mediumLed=2;
const int farLed=3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sendsorPin, OUTPUT);
  pinMode(receivsorPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(nearLed, OUTPUT);
  pinMode(mediumLed, OUTPUT);
  pinMode(farLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(sendsorPin,LOW);
  delay(1);
  digitalWrite(sendsorPin,HIGH);
  delay(10);
  digitalWrite(sendsorPin,LOW);
  
  long duration = pulseIn(receivsorPin,HIGH);

  long distance= duration*0.034/2;      //Formula of the sounds velocity

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("cm");

  if(distance>0 && distance<=10){
    digitalWrite(nearLed,HIGH);
    digitalWrite(mediumLed,LOW);
    digitalWrite(farLed,LOW);
    tone(buzzPin, 1500);
  }else if(distance>10 && distance<=20){
    digitalWrite(nearLed,LOW);
    digitalWrite(mediumLed,HIGH);
    digitalWrite(farLed,LOW);
    tone(buzzPin, 1000);

  }else if(distance>20 && distance<=30){
    digitalWrite(nearLed,LOW);
    digitalWrite(mediumLed,LOW);
    digitalWrite(farLed,HIGH);
    tone(buzzPin, 500);
  }else{
    digitalWrite(nearLed,LOW);
    digitalWrite(mediumLed,LOW);
    digitalWrite(farLed,LOW);
    noTone(buzzPin);
  }
  delay(50);

}
