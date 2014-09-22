#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Ingresar 5 numeros comprendidos entre 50 y 100.
*/

int main()
{
    int num, promedio;
    int i;
    int menor=101;
    int conta=0;
    int suma=0;

    for(i=0;i<5;i++)
{
        do
        {
            cout<<"N-"<<i+1<<"Ingresar un numero entre 50-100:...";
            cin>>num;

        }while (!((num>=50) and (num<=100)));
    if (num<menor)
        menor= num;
    if (num%2==0)
        {
        conta++;
        suma+= num;
        }

}
    if (conta>0)
        promedio= suma/ conta;
    else
        promedio=0;

    cout<<"Numero menor:..."<<menor<<endl;
    cout<<"Promedio:..."<<promedio<<endl;

    system("PAUSE");

}

