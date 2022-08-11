// Calibration time 10-60 Seconds
int calibration = 60;

const int PIR = 3;

void setup() {
  Serial.begin(9600);
  pinMode(PIR, INPUT);
  digitalWrite(PIR, LOW);

  //Calibrateion
  Serial.print("Calibrating Sensor");
  for (int x = 0; x < calibration; x++){
    Serial.println(x);
    delay(1000);
  }
  Serial.print("Calibration Complete");
  Serial.print("Starting");

}

void loop() {
  Serial.println(digitalRead(PIR));
  delay(100);
}
