#include <DS3231_Simple.h>
DS3231_Simple Clock;


void setup() {
  // put your setup code here, to run once:
    Clock.begin();
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
    Clock.printDateTo_YMD(Serial);
        Serial.print(" ");
    Clock.printTimeTo_HMS(Serial);
Serial.println();
delay(1000);

}
