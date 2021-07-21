#include <AFMotor.h> //Incluimos la libreria para el control de motores.
AF_DCMotor Motor1(1);

#include <Ultrasonic.h>  //Incluimos la libreria para el control del sensor HC-SR04.
Ultrasonic sensor(10,8,30000); // (Trig PIN,Echo PIN, microsegundos max "distancia máxima") 30000us = 5 metros.

int velocidad_de_medida=5;  //Variable para ajustar la velocidad de medida del sensor.
long int distancia=0;  //Variable para almacenar la distancia medida. 
int aleatorio=0;  //Variable para guardar un valor aleatorio. 

void setup() 
{ 
Serial.begin(9600);  //Iniciamos el puerto serie
Motor1.run(RELEASE);
} 
 
void loop() 
{ 
 
  Motor1.run(FORWARD);
  Motor1.setSpeed(100);
  delay(500);
     
 
  distancia=sensor.Ranging(CM);  //Medimos la distancia y la guardamos en la variable

  delay(100);  //Delay para controlar la velocidad de medida.
 
 //Las siguientes lineas de código son para hacer comprobaciones de que todo esta bien.
 //Serial.print("No obstaculo ");  //Imprime la palabra No obstaculo.
 Serial.println(distancia);  //Imprime la distancia.
 //Serial.print("aleatorio ");  //Imprime la palabra aleatorio
 Serial.println(aleatorio);  //Imprime la variable aleatorio

 
  
  
 while(distancia < 30){  //Mientras la distancia sea menor que 30 se mantiene en este bucler

  aleatorio=random (3);  //Funcion aleatoria para hacer que el robot no gire siempre en el mismo sentido.
        
  
  //delay(velocidad_de_medida);  //Delay para controlar la velocidad de medida.
  //Motor1.run(BACKWARD);
  //delay (2000);  //El robot se para durante un segundo                 
  //distancia=sensor.Ranging(CM);
  //delay(1000);

  if(aleatorio==0){//Si la variable aleatorio vale 0 entra en este bucle.
 Serial.print("dentro 0");//Imprime dentro 0 para comprobar que entro.
 Serial.println(distancia);//Imprime la variable distancia
 Serial.print("aleatorio ");//Imprime la palabra aleatorio.
 Serial.println(aleatorio);//Imprime la variable aleatorio.
 
  Motor1.run(FORWARD); //El robot gira a la derecha durante medio segundo.
  delay(500);}
  
  if (aleatorio==1){//Si la variable aleatorio vale 1 entra en este bucle.
 Serial.print("dentro 1");//Imprime dentro 1 para comprobar que entro.
 Serial.println(distancia);//Imprime la variable distancia
 Serial.print("aleatorio ");//Imprime la palabra aleatorio.
 Serial.println(aleatorio);//Imprime la variable aleatorio.
 
 Motor1.run(BACKWARD);  //El robot gira a la izquierda durante medio segundo.
 delay(500);}
  }
}
