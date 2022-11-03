
  int motor_pulse = 9;
  
  int motor_dir = 24;


void setup(){
      TCCR2B = TCCR2B & B11111000 | B00000010;  // Set timer 2 divisor to 2 4kHz



    analogWrite(motor_pulse, 127);

  digitalWrite(motor_dir, LOW);
  delay(2000);
     


    while(1)
        ;
}
