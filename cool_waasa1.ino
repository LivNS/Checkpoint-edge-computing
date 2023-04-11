const int ldrPin = A0;
const int ledPin = 3;
const int buzzerPin = 7;

const int ledVerde = 8;
const int ledAmarelo = 9;
const int ledVermelho = 10;

int ldrValue = 0; 
const int freq = 10; 

void setup() {
  Serial.begin(100);

  pinMode(buzzerPin, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  ldrValue = analogRead(ldrPin); 

  // Luminosidade alta e irregular.
  if (ldrValue > 200) {
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW); 
   for (int i = 0; i < 30; i++) { // toca por 3 segundos
    tone(buzzerPin, 1000); 
    delay(100);
}
	noTone(buzzerPin); // interrompe do buzzer
	delay(1000); 
  }
  
  
  // Luminosidade média.
  else if (ldrValue >= 40 && ldrValue <= 200) {
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW); 
    digitalWrite(ledVerde, LOW); 
    noTone(buzzerPin); 
  }
  
  // Luminosidade baixa.
  else if(ldrValue < 40) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW); 
    digitalWrite(ledVermelho, LOW); 
    noTone(buzzerPin); 
  }

}
 
 