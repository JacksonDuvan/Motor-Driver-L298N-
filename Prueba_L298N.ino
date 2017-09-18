//Definimos los pines del Arduino 
 int N1 = 5;
 int N2 = 4;

 int N3 = 3;
 int N4 = 2;
 
 
 void setup(){
  //Declaramos las salidas 
   pinMode(N1,OUTPUT);
   pinMode(N2,OUTPUT);
   pinMode(N3,OUTPUT);
   pinMode(N3,OUTPUT);
 }
 void loop(){
   digitalWrite(N1,HIGH);//Giro hacia adelante 
   digitalWrite(N2,LOW);
   digitalWrite(N3,HIGH);
   digitalWrite(N4,LOW);
   delay(1000);
   digitalWrite(N1,LOW);//Giro hacia atras 
   digitalWrite(N2,HIGH);
   digitalWrite(N3,LOW);
   digitalWrite(N4,HIGH);
   delay(1000);
 }
   
