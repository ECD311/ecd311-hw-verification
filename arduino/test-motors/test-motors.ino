
  int motor_pulse = 13; // azim
  int motor1_pulse = 4;//elev
  
  int motor_dir = 12; // azim
  int motor1_dir = 3; // elev


void setup(){
          TCCR0B = TCCR0B & (B11111000 | B00000010);  // Set timer 0 divisor to 2 4kHz


    //pinMode(motor1_dir, OUTPUT);
    //pinMode(motor_dir, OUTPUT);
    //analogWrite(motor_pulse, 127);
    //analogWrite(motor1_pulse, 127);

  //digitalWrite(motor_dir, HIGH);
  digitalWrite(motor1_dir, HIGH);
  delay(2000);
     


    while(1)
        ;
}
