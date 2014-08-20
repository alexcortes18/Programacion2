#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar el nombre del empleado, las ventas de los 7 dias de la semana ,
luego pedir el turno de trabajo (1,2,3 validar el turno).

Calcular el % de comisión usando el turno

Turno   % comis
1           5%
2           7%
3           8%
El seguro social y el total a pagar , luego preguntar si desea continuar ,
al final presentar el mejor sueldo, el sueldo promedio y la suma de todos los sueldos.
*/
int main()
{
    int turno, i;
    int contatp=0;
    char nombre[30],respuesta;
    double ihss, tp, sueldopromedio, comision, pc, ventas;
    double maxsueldo= 0;
    double sumsueldo=0;
    double ventastotal=0;


    do
    {
        cout<<"Ingresar el nombre del empleado:...";
        cin.getline (nombre,30);

        cout<<"Ingresar las ventas de la semana:"<<endl;
        for (i=0;i<7;i++)
        {
            cout<<"Dia #"<<i+1<<":...   ";
            cin>>ventas;
            ventastotal+= ventas;
        }
        do
        {
            cout<<"Ingresar el turno de trabajo (1,2,3):...   ";
            cin>>turno;
        }while ((turno!=1) and (turno!=2) and (turno!=3));

        switch (turno)
        {
            case 1:
                pc= 0.05;
                break;
            case 2:
                pc= 0.07;
                break;
            case 3:
                pc= 0.08;
                break;
        }

        comision=  ventastotal* pc;

        if (comision>7000)
                ihss= 245;
            else
                ihss= 0.035 * comision;

        tp= comision - ihss;
        contatp++;
        sumsueldo+= tp;

        if (tp>maxsueldo)
        {
            maxsueldo= tp;
        }

        cout<<"Seguro Social:............   "<<ihss<<endl;
        cout<<"Total a pagar (Sueldo):...   "<<tp<<endl;
        _flushall();

        do
        {
            cout<<"Desea continuar? (S= Si/ N= No) :...";
            cin. get (respuesta);
            _flushall();
        }while ((respuesta!= 'S') and (respuesta!='N'));
    }while(respuesta!='N');
    cout<<endl;
    cout<<endl;

   sueldopromedio= sumsueldo / contatp;

cout<<"Mejor sueldo:................   "<<maxsueldo<<endl;
cout<<"Sueldo promedio:.............   "<<sueldopromedio<<endl;
cout<<"Suma de todos los sueldos:...   "<<sumsueldo<<endl;
cout<<endl;
cout<<endl;

system ("PAUSE");

}
