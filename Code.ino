// Define the pin numbers for the Gas Sensor
const int sensorPin = A0;
int sensorValue;
 
// Define the pin number for the buzzer
const int buzzerPin = 2;
 
// Define pin numbers for the RGB LED
const int RPin = 5;  // R channel of RGB LED
const int GPin = 6;  // G channel of RGB LED
 
void setup() {
  Serial.begin(9600);  // Start serial communication at 9600 baud rate
 
  // Initialize the buzzer and RGB LED pins as output
  pinMode(buzzerPin, OUTPUT);
  pinMode(RPin, OUTPUT);
  pinMode(GPin, OUTPUT);
}
 
void loop() {
  // Read the analog value of the gas sensor
  sensorValue = analogRead(sensorPin);
 
  // Print the sensor value to the serial monitor
  Serial.print("Analog output: ");
  Serial.println(sensorValue);
 
  // If the sensor value exceeds the threshold, trigger the alarm and make the RGB LED red
  if (sensorValue > 300) {
    tone(buzzerPin, 500, 300);
    digitalWrite(GPin, LOW);
    digitalWrite(RPin, HIGH);
  } else {
    // If the sensor value is below the threshold, turn off the alarm and make the RGB LED green
    noTone(buzzerPin);
    digitalWrite(RPin, LOW);
    digitalWrite(GPin, HIGH);
  }
  
  // Wait for 50 milliseconds before the next loop iteration
  delay(50);
}
