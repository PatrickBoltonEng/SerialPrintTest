/*
 * Project SerialPrintTest
 * Description:
 * Author:
 * Date:
 */

SYSTEM_THREAD(ENABLED);

#define UPDATE_INTERVAL 5000

unsigned long lastupdate=0;

void setup() {
  Serial.begin(9600);
  delay(100);

  Serial.print("Serial Port Initialized");

  lastupdate=millis();

}

void loop() {
  if( (millis() - lastupdate) > UPDATE_INTERVAL)
  {
    Serial.print("Serial Port Update");
    lastupdate=millis();
  }
}