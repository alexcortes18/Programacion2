#include <iostream>
#include <stdlib.h>
using namespace std;
/*
meses con 31 dias: 1,3,5,7,8,10,12
meses con 30 dias: 4,6,9,11
febrero= 28 dias

Ingresar el mes , el día , el año y determinar si la fecha esta correcta.

se tiene que validar si el mes esta correcto, si el día corresponde al mes y si el año es mayor a cero.
*/

int main()
{
    int mes,dia,anio;

    cout<<"Ingrese el dia:...";
    cin>>dia;

    cout<<"Ingrese el mes:...";
    cin>>mes;

    cout<<"Ingrese el anio:...";
    cin>>anio;



if((anio>0) && ((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)) && ((dia>=1) && (dia<=31)) )
{cout<<"Fecha Correcta"<<"\n";}

else if ((anio>0) && ((dia>=1) && (dia<=30)) && ((mes==4)||(mes==6)||(mes==9)||(mes==11)))
{cout<<"Fecha Correcta"<<"\n";}

else if ((anio>0) && ((mes==2) && ((dia>=1) && (dia<=28))  ))
{cout<<"Fecha Correcta"<<"\n";}

else
    {cout<<"Fecha Incorrecta"<<"\n";}

system("PAUSE");
}
