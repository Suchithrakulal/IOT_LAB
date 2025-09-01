const int dry_threshold = 800;
const int wet_threshold = 300;

void setup() {
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);

  if (sensorValue >= dry_threshold) {
    Serial.println("Soil is dry");
    digitalWrite(13, HIGH);
  }
  else if (sensorValue <= wet_threshold) {
    Serial.println("Soil is wet");
    digitalWrite(13, LOW);  
  }
  else {
    Serial.println("Soil is medium");
    digitalWrite(13, LOW); 
  }

  delay(1000);
}
