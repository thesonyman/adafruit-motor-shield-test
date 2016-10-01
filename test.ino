#include <Adafruit_MotorShield.h>

void setup() {


}

void loop() {
  Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
  Adafruit_DCMotor *Motor1 = AFMS.getMotor(1);
  Adafruit_DCMotor *Motor2 = AFMS.getMotor(2);
  Motor1->setSpeed(100);
  Motor1->run(FORWARD);
  Motor2->setSpeed(255);
  Motor2->run(BACKWARD);
  delay(5000);
  Motor1->setSpeed(255);
  Motor1->run(FORWARD);
  Motor2->setSpeed(255);
  Motor2->run(FORWARD);
  delay(5000);
  
}
