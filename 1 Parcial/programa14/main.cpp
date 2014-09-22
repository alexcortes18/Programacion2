#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*
Generar 10 numeros aleatorios.
*/

int main()
{
    int num, mayor, menor;
    int conta=0;
    srand(time(0)); // generar una nueva semilla
    mayor=0;
    menor= 100;
    cout<<"Numero Aleatorios:..."<<endl;

    while (conta<10)
{
        num= 1+ rand()%(100);
        // num= liminferior + rand()%(limite superior +1  -  limite inferior)
        cout<<num<<endl;
        conta++;

    if (num>mayor)
        mayor =num;
    if (num<menor)
        menor =num;

}
    cout<<"Numero mayor es "<< mayor<<endl;
    cout<<"Numero menor es "<< menor<<endl;
system("PAUSE");
}
