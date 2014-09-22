#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar un numero hasta que e usuario diga que no quiere ingresar mas numeros.
*/

int main()
{
    int num;
    int mayor=0;
    char respuesta;


    do
    {
       cout<<"Ingresar un numero..:";
       cin>>num;
        _flushall();
        if (mayor<num)
        mayor=num;
        do
        {
        cout<<"Desea continuar?:";
        cin.get(respuesta);
        _flushall();
        }while ((respuesta!='S') and (respuesta!='N'));

    }while(respuesta!='N');
    cout<<"El numero Mayor es...:"<<mayor<<endl;

system("PAUSE");
}
