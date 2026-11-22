const int sensorPin = 34;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int value = analogRead(sensorPin);

  int moisture = map(value, 0, 4095, 0, 100);

  Serial.print("Moisture: ");
  Serial.print(moisture);
  Serial.println("%");

  if (moisture < 30) {
    Serial.println("Water Needed!");
  } else {
    Serial.println("Soil Moist");
  }

  delay(2000);
}
