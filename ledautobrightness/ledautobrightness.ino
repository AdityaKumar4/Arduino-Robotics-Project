int led1=11;
void setup() {
  // put your setup code here, to run once:
pinMode (led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for ( int fadeValue =0;fadeValue<=255;fadeValue+= 5)
{ 

  analogWrite(led1,fadeValue);
  delay(75);
  }
for ( int fadeValue =255;fadeValue<=255;fadeValue -= 5)
{ 

  analogWrite(led1,fadeValue);
  delay(75);
  }

}
