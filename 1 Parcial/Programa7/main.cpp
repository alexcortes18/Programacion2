#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Ingresar el nombre del empleado, las ventas y el turno luego de calcular el % de comision,
ihss y total a pagar
turno   Comision
1       5%
2       7%
3       9%

Bono: se da si la persona vendio mas de 50,000 y es de la zona 1 o 3, el bono es de 500 sino es de 150.
*/



int main()
{   char nombre[30];
    double ventas, comis, ihss, pc,tp,bono;
    int turno;

    cout<<"Nombre del empleado:...";
    cin.getline(nombre,30);

    cout<<"Ventas:...";
    cin>>ventas;

    cout<<"Turno:...";
    cin>>turno;


if (turno==1)
    pc= 0.05;
    else if (turno==2)
    pc= 0.07;
        else if (turno==3)
        pc= 0.09;
                else
                pc= 0;

comis= ventas* pc;
if (comis>7000)
    ihss=245;
else
    ihss= 0.035* comis;


if ((ventas>=50000) && ((turno==1) || (turno==3)))
    bono= 500;
    else
    bono=150;

tp= comis+ bono - ihss;

cout<<"El % de Comision...:"<<pc<<"\n";
cout<<"Comision Ganada:..."<<comis<<"\n";
cout<<"Total a Pagar:..."<<tp<<"\n";
cout<<"Seguro Social:..."<<ihss<<"\n";
cout<<"Bono:..."<<bono<<"\n";

system("PAUSE");
}
