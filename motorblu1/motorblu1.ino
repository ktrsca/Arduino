
char j ;
is = "";
#include <AFMotor.h> 
AF_DCMotor motor1 ( 1 ) ;
AF_DCMotor motor2 ( 2 ) ;

void setup(){
  motor1.setSpeed ( 200 ) ; // Se puede configurar de 0 a 255
  motor2.setSpeed ( 200 ) ; // Se puede configurar de 0 a 255
  Serial.begin ( 9600 ) ;           
}

void loop(){
  if ( Serial.available ()) {
  while ( Serial.available ())
    {
      char C = ( char ) Serial.read() ;
      is + = C  ;       
    }
    Serial.println ( is ) ;
    while  ( Serial.available () > 0 )  
    {  j  = Serial.read ()  ;  }      
    if ( is  ==  "f" ) {   // Para avanzar      
      motor1.run (FORWARD) ;
      motor2.run (FORWARD) ;
    } else  if ( is  ==  "b" ) { // Para retroceder 
      motor1.run (BACKWARD) ;
      motor2.run (BACKWARD) ;
    }
    else  if ( is  ==  "l" ) {   // Para moverse a la izquierda
      motor1.run (FORWARD) ;
      motor2.run (RELEASE) ;
    }
    else  if ( is  ==  "r" ) { // Para moverse a la derecha 
      motor1.run (RELEASE) ;
      motor2.run (FORWARD) ;
    }
    else  if ( is  ==  "s" ) {   // Para detener
      motor1.run (RELEASE) ;
      motor2.run (RELEASE) ;
    }
    is = "" ;
  }
}
