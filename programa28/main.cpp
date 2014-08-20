#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar 5 nummeros pares y presentar el mayor.
*/

int main()
{
    int numero;
    int mayor= 0;
    int i;

    for (i=0; i<5; i++)
    {
        do
        {
            cout<<"Ingresar 5 numeros pares, #"<<i+1<<"...:";
            cin>>numero;

        }while (!(numero%2==0));

    if (numero> mayor)
        mayor= numero;
    }

    cout<<"El mayor es:...:"<<mayor<<endl;
    cout<<endl;
system("PAUSE");
}
