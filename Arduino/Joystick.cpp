const int joystickX = A0;   // Analog pin for reading X axis of the Joystick
const int LED_left = 2;     // Pin for Left LED
const int LED_right = 3;    // Pin for Right LED

void setup() {
  pinMode(LED_left, OUTPUT);
  pinMode(LED_right, OUTPUT);
}

void loop() {
  int x = analogRead(joystickX);  // Read X axis value from the Joystick

  if (x < 512) {                 // If the Joystick is tilted to the left side
    digitalWrite(LED_left, HIGH);  // Turn on the Left LED
    digitalWrite(LED_right, LOW);  // Turn off the Right LED
  } else {                        // If the Joystick is tilted to the right side
    digitalWrite(LED_left, LOW);   // Turn off the Left LED
    digitalWrite(LED_right, HIGH); // Turn on the Right LED
  }
}