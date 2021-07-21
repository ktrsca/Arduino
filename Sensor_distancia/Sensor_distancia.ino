 #define trigPin 13
 #define echoPin 12

     void setup()
        {   Serial.begin (9600);
            pinMode(trigPin, OUTPUT);
            pinMode(echoPin, INPUT); 
        }

     void loop()
        {   long duracion, distancia ;
            digitalWrite(trigPin, LOW); 
            duracion = pulseIn(echoPin, HIGH) ;
        }
