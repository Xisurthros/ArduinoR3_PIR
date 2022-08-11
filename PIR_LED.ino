// Calibration time 10-60 Seconds
int calibration = 60;

const int PIR = 3;
const int LED = 8;

void setup() {
  Serial.begin(9600);
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(PIR, LOW);

  //Calibrateion
  Serial.println("Calibrating Sensor");
  for (int x = 0; x < calibration; x++){
    Serial.println(x);
    delay(1000);
  }
  Serial.println("Calibration Complete");
  Serial.println("Starting");

}

void loop() {
  if (digitalRead(PIR) == 1){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay(100);
}
