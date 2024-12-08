int AnalogPin = A0;
float Vin;
int analogVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(AnalogPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogVal = analogRead(AnalogPin);
  Vin= (analogVal *5.)/1023.;
  Serial.println(Vin);
  delay(500);

}
