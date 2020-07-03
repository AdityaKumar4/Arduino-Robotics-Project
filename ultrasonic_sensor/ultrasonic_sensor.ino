int echo=10;
int a;
int trig=9;
long duration,cm;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
duration=pulseIn(echo,HIGH);
cm=(duration*0.034)/2;
Serial.println(cm);
}
