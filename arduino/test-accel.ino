#include <LSM9DS1_Types.h>
#include <LSM9DS1_Registers.h>
#include <SparkFunLSM9DS1.h>


LSM9DS1 azim;


#define LSM9DS1_M_AZIMUTH 0x1E     // azimuth magnetometer I2C address
#define LSM9DS1_AG_AZIMUTH 0x6B    // azimuth accel/gyro I2C address
#define LSM9DS1_M_ELEVATION 0x1C   // elev magnetometer I2C address
#define LSM9DS1_AG_ELEVATION 0x6A
void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
    azim.settings.device.commInterface = IMU_MODE_I2C;
    azim.settings.device.mAddress = LSM9DS1_M_ELEVATION;  // magnetometer I2C address
  Serial.println("b");
        if (!azim.begin()) {
        Serial.println("Failed to communication with LSM7DS1 compass");
        Serial.println("double check the wiring");
        while (1)
            ;
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  
    if (azim.magAvailable()) {
        // checks to see if the magnometer is available to call the
        // readMag() function
        azim.readMag();
    }
    Serial.print(azim.mx);
    Serial.print(" ");
  Serial.print(azim.my);
    Serial.print(" ");
    Serial.print(azim.mz);
    Serial.print(" ");
    Serial.println("a");
    delay(1000);
}
