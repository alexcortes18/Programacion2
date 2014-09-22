#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;
/*
Generar 10 numeros aleatorios entre 1-500, contar cuantos son numeros divisible entre 5 y son pares a la vez, obtener
su promedio y presentarlo al final, el programa finaliza si encuentra un numero mayor a 300 o genera 10 numeros.
*/

int main()
{
    int numero=0;
    int promedio;
    int parydivisibles5=0;
    int cont5y2=0;
    int conta=0;
    srand(time(0));

while ((conta<10) and (numero<300))
{
    conta++;
    numero= 1 + rand()%((501-1));

        cout<<numero<<endl;

    if (numero%10==0)
            {
            cont5y2++;
            parydivisibles5+=numero;
            }

}
cout<<"Numeros de pares y divisibles entre 5:..."<<cont5y2<<endl;

if (cont5y2==0)
    cont5y2= cont5y2+1;

promedio= parydivisibles5/ cont5y2;


cout<<"Promedio de numeros pares y divisibles entre 5:..."<<promedio<<endl;


system("PAUSE");

}
