#include<iostream>
using namespace std;

int main()
{
int d, m, a, dm, t, i;

cout << "Ingrese fecha (dd mm aa): "; 
cin >> d >> m >> a;

t = 365 * a + ( a - 1 ) / 4; 

for( i = 1; i<m; t += dm, i++ ) 
switch(i)
{
case 1 :
case 3 :
case 5 :
case 7 :
case 8 :
case 10:
case 12: dm = 31;
break;
case 4 :
case 6 :
case 9 :
case 11: dm = 30;
break;
case 2 : if( a > 0 && a % 4 == 0 )
dm = 29;
else
dm = 28;
}

t+=d; 

t%=7; 

switch ( t )
{
case 0: cout << "Domingo\n";
break;
case 1: cout << "Lunes\n";
break;
case 2: cout << "Martes\n";
break;
case 3: cout << "Miercoles\n";
break;
case 4: cout << "Jueves\n";
break;
case 5: cout << "Viernes\n";
break;
case 6: cout << "Sabado\n";
break;
}
cin.ignore();
cin.get();
return 0;
}
