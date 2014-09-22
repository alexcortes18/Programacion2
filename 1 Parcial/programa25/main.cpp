#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
/*
Ingresar el nombre del empleado, las ventas del mes y el turno de trabajo (1,2,3 validarlo), luego determinar el %
de comision usando el turno
turno   %Comision
1       5%
2       6%
3       7%
preguntar si desea continuar.
*/
int main()
{
    char nombre[30],respuesta;
    int turno;
    double comis,pc,ventas;

    do
    {
        cout<<"Ingresar el nombre del empleado:...";
        cin.getline(nombre,30);
        cout<<"Ventas del Mes:...";
        cin>>ventas;

        do
        {
            cout<<"Turno de trabajo:...";
            cin>>turno;
        }while (!((turno>=1) and (turno<=3)));

        switch (turno)
        {
            case 1:
                pc=0.05;
                break;
            case 2:
                pc=0.06;
                break;
            case 3:
                pc=0.07;
                break;
        }
        comis = ventas * pc;


        cout<<"% Comision Ganada"<<endl;
        cout<<"Comision ganada"<<comis<<endl;

        do
        {
            cout<<"Desea continuar?:";
            cin.get(respuesta);

        }   while ((respuesta!='S') and (respuesta!='N'));
    }while(respuesta!='N');

}
