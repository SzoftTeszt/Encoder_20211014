int sw=13;
int outputCLK = 11;
int outputDT =12;
void setup() {
  Serial.begin(9600);
  Serial.println("Encoder kezelő program!");
  for(int i=11;i<=13;i++) pinMode(i, INPUT_PULLUP);
  }

void loop() {
  for(int i=11;i<=13;i++) {
    Serial.print(digitalRead(i));
    Serial.print("; ");
  }
  Serial.println("");

}
