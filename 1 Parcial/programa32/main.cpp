#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;
/*
Generar un numero entre 1-100 usando una funcion, luego elaborar una
funcion que nos devuelva la respuesta validada de S o N.
Pedir los numeros y presentar la suma.
*/

int num, suma, mayor;
char resp;

int aleatorio1_100()
{   int numx;
    srand(time(0));
    numx= 1 + rand ()%(100-1);
    return numx;
}

char pedirrespuesta()
{   char respx;
        do
            {
            cout<<"Desea continuar?:";
            cin.get(respx);
            _flushall();
            }while ((respx!='S') and (respx!='N'));
        return respx;
}

void suma2numeros (int num, int &suma)
{
    suma+=num;
}
int maximo (int num, int mayor)
{
    if (num> mayor)
        return num;
    else
        return mayor;
}

int main()
{   suma=0;
    mayor=0;
    do
    {
        num= aleatorio1_100();
        cout<<"Numero generado es "<<num<<endl;

        resp = pedirrespuesta();
        suma2numeros(num,suma);
        mayor= maximo(num, mayor);
    }while (resp!='N');
    cout<<"Suma de los numeros es ..."<<suma<<endl;
    cout<<"El numero mayor es ..."<<mayor<<endl;
}
