#include <iostream>
#include <stdio.h>

using namespace std;
/*
Se tiene un arreglo de registros con la siguiente estructura:
nombre, zona, ventas, comision.
Elaborar un procedimiento para ingresar el registro nombre, ventas, y validar Zona.

Debera calcular la comision ganada usando una funcion.
Zona       Comision
A           5%
B           6%
C           8%

Elaborar un procedimiento oara calcular todas las comisiones.
Elaborar una funcion para devolver el mejor empleado usando la comision ganada.
Usar un procedimiente para presentar un empleado y otro para presentar todos los empleados.
Presentar el mejor empleado.
*/

struct registro
{
    string nombre;
    char zona;
    double pc;
    int ventas, comision;
};
int const n=4;
registro reg[n];
registro mejoremple;

void ingresar (registro reg[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<"Ingrese el nombre del empleado:...";
        cin>>reg[i].nombre;

        cout<<"Ingrese las ventas:...";
        cin>>reg[i].ventas;
        _flushall();

        do
        {
            cout<<"Ingrese la zona (A/B/C):...";
            cin.get(reg[i].zona);
            _flushall();
        }while ((reg[i].zona!='A') and (reg[i].zona!='B') and (reg[i].zona!= 'C'));
    }
}
double calcular(char zona, double pc)
{
    switch(zona)
    {
        case 'A':
            return 0.05;
            break;
        case 'B':
            return 0.06;
            break;
        default:
            return 0.08;
            break;
    }
}
void calcular_todas(registro reg[], int n)
{   int i;
    for(i=0;i<n;i++)
    {
    reg[i].pc= calcular(reg[i].zona,reg[i].pc) ;
    reg[i].comision= reg[i].pc* reg[i].ventas;
    }
}
void presentar (registro reg)
{
    cout<<"El nombre del empleado es:....."<<reg.nombre<<endl;
    cout<<"Las ventas del empleado son:..."<<reg.ventas<<endl;
    cout<<"La zona es:...................."<<reg.zona<<endl;
    cout<<"El porcentaje de comision es:..."<<reg.pc<<endl;
    cout<<"La comision del empleado es:..."<<reg.comision<<endl;
    cout<<endl;
}
void presentar_todos(registro reg[], int n)
{   int i;
    for(i=0;i<n;i++)
    {presentar(reg[i]);}
}
registro Maxemple(registro reg[], int n)
{   int i;
    registro xmax;
    xmax= reg[0];
    for(i=0;i<n;i++)
    {
        if(reg[i].comision>xmax.comision)
            xmax= reg[i];
    }
    return xmax;
}

void ordenar (registro reg[], int n)
{
    int i,j,k;
    registro orden;

    for (i=1;i<n;i++)
    {
        for (j=0;j<n-1;j++)
            {
                if (reg[j].nombre>reg[j+1].nombre)
                {
                    orden=reg[j];
                    reg[j]=reg[j+1];
                    reg[j+1]=orden;
                }
            }
    }
    cout<<"Presentacion de empleados por orden de nombre:..."<<endl;
    for (k=0; k<n; k++)
        presentar(reg[k]);
}
void ordenar_comision (registro reg[], int n)
{
    int i,j,k;
    registro orden;

    for (i=1;i<n;i++)
    {
        for (j=0;j<n-i;j++)
            {
                if (reg[j].comision>reg[j+1].comision)
                {
                    orden=reg[j];
                    reg[j]=reg[j+1];
                    reg[j+1]=orden;
                }
            }
    }
    cout<<"Presentacion de empleados por orden de comision:..."<<endl;
    for (k=0; k<n; k++)
        presentar(reg[k]);
}

int main()
{
    ingresar (reg,n);
    calcular_todas(reg,n);
    presentar_todos(reg,n);
    mejoremple= Maxemple(reg,n);
    cout<<endl<<endl;
    cout<<"El mejor empleado es:"<<endl;
    presentar(mejoremple);
    cout<<endl<<endl;
    ordenar(reg, n);
    cout<<endl<<endl;
    ordenar_comision(reg,n);
}


