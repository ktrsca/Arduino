#include <AFMotor.h>

AF_DCMotor Motor1(1);
/*AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);*/

char bt = 'S';
void setup()
{
  Serial.begin(9600);
  Motor1.run(RELEASE);
  Motor1.setSpeed(200);
  /*motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  Stop();*/
}

  void loop() {

    bt = Serial.read();

    if (bt == 'F')
    {
      forward();
    }

    if (bt == 'B')
    {
      backward();
    }

    if (bt == 'L')
    {
      left();
    }

    if (bt == 'R')
    {
      right();
    }

    if (bt == 'S')
    {
      Stop();
    }

  }
  void forward() {
    Motor1.run(FORWARD);
   /* motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);*/
  }

  void backward()
  {
    Motor1.run(BACKWARD);
   /* motor2.run(BACKWARD);
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);*/
  }

  void left()
  {
    Motor1.run(FORWARD);
   /* motor2.run(FORWARD);
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);*/
  }

  void right() {
    Motor1.run(BACKWARD);
   /* motor2.run(BACKWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);*/
  }

  void Stop() {
    Motor1.run(RELEASE);
    /*motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);*/
  }
