#include <iostream>
#include <stdlib.h>

using namespace std;
/*
Ingresar 5 numeros y presentar la sumatora al final del ciclo. Usar while
*/

int main()
{
 int numero;
 int contador,suma,cont100,prom;
 contador=0;suma=0;cont100=0;

 while (contador<5)
 {   cout<<"Ingresar numero:...";
     cin>>numero;

     suma += numero; //suma= suma+ numero;
     contador ++; // contador= contador + 1

    if (numero>100)
        cont100++;
    }
    prom= suma/contador;

    cout<<"Suma de los numeros es:..."<<suma<<endl;
    cout<<"Cuantos numeros fueron mayores a 100:..."<<cont100<<endl;
    cout<<"El promedio es:..."<<prom<<endl;

system("PAUSE");
}



