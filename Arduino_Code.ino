// Smart Lighting System using Arduino and LDR
// Embedded Systems & IoT Mini Project

// Variable declarations

int ldr = A0;      // LDR sensor connected to analog pin A0
int led = 13;      // LED connected to digital pin 13
int value = 0;     // Variable to store sensor values

// Setup function runs only once

void setup() {

  // Set LED pin as OUTPUT
  pinMode(led, OUTPUT);

  // Start serial communication
  // Used to display sensor readings
  Serial.begin(9600);
}

// Loop function runs continuously

void loop() {

  // Read analog value from LDR sensor
  value = analogRead(ldr);

  // Print sensor value on Serial Monitor
  Serial.println(value);

  // Check light intensity
  // If value is less than 500, surroundings are dark

  if(value < 500) {

    // Turn ON LED
    digitalWrite(led, HIGH);

  }
  else {

    // Turn OFF LED
    digitalWrite(led, LOW);

  }

  // Small delay for stable readings
  delay(500);
}