float value;
int ledvalue;
int led=11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
value = analogRead(A0);
ledvalue = map(value,0,1023,0,255);
float x=(value*5)/1023;
analogWrite(led,ledvalue);
Serial.println(x);
delay(50);
}
