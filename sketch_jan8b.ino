const int ledPin1 = 3;
const int ledPin2 = 4;

const int ldrPin1 = A0;
const int ldrPin2 = A1;



void setup() {

Serial.begin(9600);

pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);

pinMode(ldrPin1, INPUT);
pinMode(ldrPin2, INPUT);
}

int status(int x,int y){
  
int ldrStatus = analogRead(x);

if (ldrStatus >=300) {

digitalWrite(y, HIGH);

Serial.println("LDR is DARK, LED is ON");
delay(6000);
}

else {
  
digitalWrite(y, LOW);
Serial.println("---------------");

}

}


void loop() {
  
  status(ldrPin1,ledPin1);
  status(ldrPin2,ledPin2);
}