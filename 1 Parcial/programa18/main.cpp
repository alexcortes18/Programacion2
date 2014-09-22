#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;
/*
Ingresr la tabla de la multiplicacion a presentar, usar el ciclo for asi:
1 x 5= 5
2 x 5= 10
.....
*/


int main()
{
    system("color 04");
    int tabla,respuesta,i;

    cout<<"Tabla de multiplicar a presentar...:";
    cin>>tabla;

    for(i=1;i<=10;i++)
{
    respuesta= i* tabla;
    cout<<i<<" x "<<tabla<<" = "<<respuesta<<endl;
}
    system("PAUSE");

}
