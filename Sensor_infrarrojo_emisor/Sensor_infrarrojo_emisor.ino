/*
 * Prueba de modulo de led infrarrojo KY-005  
 */
#include <IRremote.h>
IRsend irsend; // iniciar el objeto infrarrojo
 
void setup()
{
Serial.begin(9600); // iniciar comunicacion serie
}
void loop()
{
if (Serial.read() != -1) {
     for (int i=0; i<3; i++) {
       irsend.sendSony(0xa90, 12); // codigo de encendido de Sony TV
       delay(100);
     }
   }
}
