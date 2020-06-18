#include <iostream>

using namespace std; 
int main()
{
   int Hora;
   int Minutos;
   int Segundos;
   char c;
   cout <<"Por favor, introduzaca una hora, minutos y segundos como en el ejemplo que se le mostrara"<< endl;
   cout <<"Ejemplo: 22:23:32"<< endl;
   cout <<"Introduzaca hora, minutos y segundos: "<< endl;

   
   cin >>Hora >>c >>Minutos >> c >> Segundos;
   Segundos = Segundos + 1;
   if (Segundos >= 60)
   {
      Segundos = 0;
      Minutos = Minutos + 1;
      if (Minutos >= 60)
      {
         Minutos = 0;
         Hora = Hora + 1;
         if (Hora >= 24)
         {
            Hora = 0;
         }
         
      }
      
   }


   cout <<"La hora es: "<< Hora <<":"<< Minutos <<":"<< Segundos << endl;
}   
    