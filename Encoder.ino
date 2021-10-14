int sw=13;
int outputCLK = 11;
int outputDT =12;
int most=1;
int ezelott=1;
int szamlalo=0;

void setup() {
  Serial.begin(9600);
  Serial.println("Encoder kezelő program!");
  for(int i=11;i<=13;i++) pinMode(i, INPUT_PULLUP);
  }

void loop() {
  most=digitalRead(outputCLK);
  if (most != ezelott)
  {
    if(digitalRead(outputDT) != most) { szamlalo--;}
    else { szamlalo++;}
    Serial.println(szamlalo);
  }
  ezelott=most;
}
