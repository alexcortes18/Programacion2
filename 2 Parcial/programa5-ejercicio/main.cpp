#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar 5 alumnos a un registro con los siguientes datos: nombre, p1, p2, promedio.

Usando un procedimiento ingresar el nombre y las notas.
Usar una funcion para calcular el promedio de un alumno.
Usar un procedimiento para calcular los promedios de todos los alumnos.
Usar una funcion para devolver el mejor almuno de todo el arreglo.
Elaborar un procedimiento para presentar un alumno.
Elaborar un procedimiento para presentar todos los alumnos.
*/

struct alumnos
{
    int p1,p2,promedio;
    string nombre;
};

int const n=5;
alumnos r[n];
alumnos bestalumno;

void ingresar_nombrenotas(alumnos r[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<"Ingresar el nombre del alumno:...";
        cin>>r[i].nombre;
        cout<<"Ingresar la nota  del primer parcial:...";
        cin>>r[i].p1;
        cout<<"Ingresar la nota  del segundo parcial:...";
        cin>>r[i].p2;
        _flushall();
    }
}
int promedio(int p1, int p2, int promedio)
{
    promedio= (p1+p2)/2;
    return promedio;
}
void promedio_todos(alumnos r[], int n)
{   int i;
    for(i=0;i<n;i++)
    {
        r[i].promedio= promedio(r[i].p1, r[i].p2, r[i].promedio);
    }
}

void presentar(alumnos r)
{
    cout<<"El nombre del alumno es:..."<<r.nombre<<endl;
    cout<<"Nota del primer parcial:..."<<r.p1<<endl;
    cout<<"Nota del segundo parcial:..."<<r.p2<<endl;
    cout<<"El promedio del alumno es:..."<<r.promedio<<endl;
}
void presentar_todos(alumnos r[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        presentar(r[i]);
    }
}
alumnos Mejoralumno(alumnos r[], int n)
{
    int i;
    alumnos xmax;
    xmax= r[0];
    for(i=0;i<n;i++)
    {
        if(r[i].promedio> xmax.promedio)
            xmax= r[i];
    }
    return xmax;
}

int main()
{
    ingresar_nombrenotas(r, n);
    promedio_todos(r, n);
    presentar_todos(r, n);
    cout<<endl<<endl;
    cout<<"El mejor alumno es:"<<endl;
    presentar(Mejoralumno(r,n));
    cout<<endl<<endl;

int i,j,k;
string orden;
for (i=0;i<n;i++)
{
    for (j=0;j<n-i;j++)
        {
            if (r[j].nombre>=r[j+1].nombre)
            {
                orden=r[j].nombre;
                r[j].nombre=r[j+1].nombre;
                r[j+1].nombre=orden;
            }
        }

}
for (k=0;k<=n;k++)
{
    cout<<r[k].nombre<<endl;
}
}
