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

}
