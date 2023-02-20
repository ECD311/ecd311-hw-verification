#include <arduino-sht.h>
#include <SHTSensor.h>

#include <Wire.h>

  SHTSensor sht;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  sht.init();

}

void loop() {
  // put your main code here, to run repeatedly:
  sht.readSample();
  Serial.print("T: ");
  Serial.println(sht.getTemperature());
  Serial.print("H: ");
  Serial.println(sht.getHumidity());
  delay(5000);

}
