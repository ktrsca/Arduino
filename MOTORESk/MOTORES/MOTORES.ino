#include <AFMotor.h>
AF_DCMotor Motor1(1);
AF_DCMotor Motor2(2);
AF_DCMotor Motor3(3);

void setup()
   {  Motor1.run(RELEASE);
      Motor2.run(RELEASE);
      Motor3.run(RELEASE);
   }

void loop()
   {   
       delay(100);
       Motor1.run(FORWARD); 
       delay (400);

       Motor2.run(FORWARD);
       delay(500);
       Motor2.setSpeed(100);
       delay(100);

       Motor3.run(FORWARD);
       delay(500);
       Motor3.setSpeed(100);
       delay(100);


       Motor1.run(FORWARD);
       Motor1.setSpeed(180);
        
   }
