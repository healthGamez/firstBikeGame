const int button=1;


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(button,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(button),push,FALLING);
  Serial.begin(9600);
 
}
 
void loop() {
    Serial.write((byte)0x00);
    Serial.flush();
    delay(10000);
}

void push(){
    //used to measure time between pulses.
    Serial.write((byte)0x01);
    Serial.flush();
}
