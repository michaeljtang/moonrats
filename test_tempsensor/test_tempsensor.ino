#define sensor A5
int reading;

void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  reading = analogRead(sensor);
  
  float temp = (reading * 500.0) / 1024.0;
  Serial.print(temp);
  Serial.println();
  delay(1000);
}
