 

long randomNumber;
 
void setup() {
  
  //Inicializamos la comunicación serial
  Serial.begin(9600);
  
  //Escribimos por el puerto serie mensaje de inicio
  Serial.println("Inicio de sketch - secuencia de numeros aleatorios");
      
}
 
//Bucle principal
void loop() {
 
  //Genera un numero aleatorio entre 1 2
  randomNumber = random(1,3);
  
  //Escribimos el numero aleatorio por el puerto 
  Serial.println(randomNumber);
 
  //Esperamos 1 segundo para repetir
  delay(1000);
}
