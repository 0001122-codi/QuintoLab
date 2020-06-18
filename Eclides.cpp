#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std; 
 
int main()
{
    int Dividendo;
    int Divisor;

    cout <<("PROGRAMA DEL TEOREMA DE EUCLIDES")<< endl;
    cout <<("Hola. Aqui podras calculas el MCD (Maximo Comun Divisor) de dos numeros. Por favor, introduzca su Dividendo: ")<< endl;

    scanf (" %d", &Dividendo);
    cout <<"Ahora, introduzca el Divisor: "<< endl;

    scanf (" %d", &Divisor);
    int Resto = Dividendo%Divisor;
    if(Resto == 0){
       printf("El MCD es %d", Divisor);
       }
    while(!Resto == 0)
    {
     Dividendo = Divisor;
     Divisor = Resto;
     Resto = Dividendo%Divisor;
     if(Dividendo%Divisor == 0){
        printf("\n\n  El MCD es %d", Divisor);
        break;
     }
    }
 return 0;
}