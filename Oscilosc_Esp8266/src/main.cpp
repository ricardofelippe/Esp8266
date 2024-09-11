
# include <Arduino.h>
//---Função Principal---//
#define LED 14   // D5
void setup() 
{
 //Configura a GPIO15 como saída
 pinMode(LED,OUTPUT); 
}
//---Loop Infinito---//
void loop() 
{
 //"Liga" a GPIO15
 analogWrite(LED,0);
 //Pausa o programa
 delay(500);
 analogWrite(LED,100);
 //Pausa o programa
 delay(500);
 analogWrite(LED,200);
 //Pausa o programa
 delay(500);
 analogWrite(LED,300);
 //Pausa o programa
 delay(500);
 analogWrite(LED,600);
 //Pausa o programa
 delay(500);
 analogWrite(LED,800);
 //Pausa o programa
 delay(500);
 analogWrite(LED,1023);
 //Pausa o programa
 delay(1500);
 


 
}