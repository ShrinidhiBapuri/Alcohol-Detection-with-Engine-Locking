 
const int alcoholPin = A1; // Analog pin for alcohol sensor 
const int relayPin = 2;    // Digital pin for relay module 
const int buzzerPin = 3;   // Digital pin for buzzer 
const int ledPin = 4;      // Digital pin for LED 
 
const int THRESHOLD_VALUE = 300; // Adjust this value based on your sensor readings 
 
void setup() { 
  pinMode(alcoholPin, INPUT); 
  pinMode(relayPin, OUTPUT); 
  pinMode(buzzerPin, OUTPUT); 
  pinMode(ledPin, OUTPUT); 
   
  digitalWrite(relayPin, LOW); // Ensure the relay is initially off 
} 
 
void loop() { 
  int alcoholValue = analogRead(alcoholPin); 
 
  // You may need to calibrate the alcohol sensor based on your specific model 
  if (alcoholValue > THRESHOLD_VALUE) { 
    // Alcohol detected, take necessary actions 
    digitalWrite(relayPin, HIGH); // Turn on relay to lock the engine 
    digitalWrite(buzzerPin, HIGH); // Turn on buzzer to sound an alarm 
    digitalWrite(ledPin, HIGH); // Turn on LED to indicate alcohol detection 
  } else { 
    // No alcohol detected, reset actions 
    digitalWrite(relayPin, LOW); // Turn off relay to unlock the engine 
    digitalWrite(buzzerPin, LOW); // Turn off buzzer 
    digitalWrite(ledPin, LOW); // Turn off LED 
  } 
 
  delay(1000); // Adjust the delay based on your application 
}
