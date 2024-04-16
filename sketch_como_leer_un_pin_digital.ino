/*
Fundación Kinal 
Centro educativo tecnico laboral kinal
Quinto perito
Quinto electronica
Codigo Tecnico: EB5AV
Curso: Taller de electronica digital y reparacion de computadoras
Proyecto: Escritura en un pin digital (encender o apagar un pin digital)
Dev: Profe. Alejandro Lopez Navas 
Fecha: 12 de abril 
*/

//Directivas de preparación 
#define LedNaranja   4    //pin4 conectado  a un led 
#define tiempo_espera 500 //tiempo entre estados del led

void setup()
{ 
  pinMode(LedNaranja, OUTPUT); //Pin4 como salida. 
  digitalWrite(LedNaranja, LOW); //LED conectado al pin 13 inicia apagado
}  

void loop()
{
  digitalWrite(LedNaranja, HIGH); //Enciendo el led conetado al pin4
  delay(tiempo_espera);  //espera de 500 milisegundos.
  digitalWrite(LedNaranja, LOW); //Apago el led conectado al pin4
  delay(tiempo_espera);  //espera de 500 milisegundos
}
