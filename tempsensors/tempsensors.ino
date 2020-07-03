float temp;
float celcius;
int temppin =1;
float far;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
temp= analogRead(temppin);
Serial.print("RAW DATA =");
Serial.print(temp);
celcius = temp*0.488281;
Serial.print(", temp = ");
Serial.print(celcius);
far=32+9/5*celcius;
Serial.print(" Temprature in farhenheit = ");
Serial.println(far);
delay(300);

}
