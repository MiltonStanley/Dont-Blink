/*
  Don't Blink
  Turns on an LED on for one second, then leaves it on. Blink and you're dead.
 */
 
int led = 13;
void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  digitalWrite(led, HIGH);  // Don't blink. Don't even blink. Blink and you're dead.
  delay(1000);              // They are fast, faster than you could believe. 
  digitalWrite(led, HIGH);  // Don't turn your back, don't look away, and don't blink. 
  delay(1000);              // Good luck.
}
