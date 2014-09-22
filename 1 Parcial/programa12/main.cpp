#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Ingresar 5 numeros y contar cuantos son pares e impares.
*/


int main()
{
   int num, cpar, cimpar;
   int conta=0;
   cpar=0; cimpar=0;

   while (conta<5)
   {
       cout<<"Ingrese un numero:...";
       cin>>num;

    conta++;
    if (num%2==0)
        cpar++;
    else
        cimpar++;
   }
    cout<<"Numero de numeros pares:..."<<cpar<<endl;
    cout<<"Numero de numeros impares:..."<<cimpar<<endl;


    system("PAUSE");




}
