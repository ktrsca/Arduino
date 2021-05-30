#include <AFMotor.h>
AF_DCMotor Motor1(1);

void setup()
   {  Motor1.run(RELEASE);
   }

void loop()
   {   Motor1.run(FORWARD); 
       delay (400);
       Motor1.setSpeed(180);
        
   }
