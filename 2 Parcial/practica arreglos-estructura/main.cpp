#include <iostream>
#include <stdio.h>

using namespace std;
/*
Ingresar 5 alumnos a un registro con los siguientes datos: nombre, p1, p2, promedio.

Usando un procedimiento ingresar el nombre y las notas.
Usar una funcion para calcular el promedio de un alumno.
Usar un procedimiento para calcular los promedios de todos los alumnos.
Usar una funcion para devolver el mejor alumno de todo el arreglo.
Elaborar un procedimiento para presentar un alumno.
Elaborar un procedimiento para presentar todos los alumnos.
*/
struct alumnos
{
    char nombre[30];
    int p1,p2,promedio;
};
int const n=5;
alumnos reg[n];
alumnos bestalumno;

void ingresarnombrenotas(alumnos reg[], int n)
{   int i;
    for(i=0;i<n;i++)
    {
        cout<<"Ingrese el nombre del alumno:...";
        cin.getline(reg[i].nombre,30);
        cout<<"Ingrese la nota del primer parcial:...:";
        cin>>reg[i].p1;
        cout<<"Ingrese la nota del segundo parcial:...:";
        cin>>reg[i].p2;
        _flushall();
    }
}
int calcularprom(int p1, int p2, int promedio)
{
    promedio= (p1+p2)/2;
    return promedio;
}
void promtodos(alumnos reg[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        reg[i].promedio= calcularprom(reg[i].p1, reg[i].p2,reg[i].promedio);
    }
}

void presentar(alumnos reg)
{
    cout<<"Nombre del alumno:..."<<reg.nombre<<endl;
    cout<<"Nota del primer parcial:..."<<reg.p1<<endl;
    cout<<"Nota del segundo parcial:..."<<reg.p2<<endl;
    cout<<"Promedio del las notas:..."<<reg.promedio<<endl;
}
 void presentartodos(alumnos reg[], int n)
{
     int i;
     for(i=0;i<n;i++)
     {
      presentar(reg[i]);
     }
}
alumnos maximo(alumnos reg[], int n)
{   int i;
    alumnos xmax;
    xmax= reg[0];
    for(i=0;i<n;i++)
    {
        if(reg[i].promedio>xmax.promedio)
            xmax= reg[i];
    }
    return xmax;
}

int main()
{
    ingresarnombrenotas(reg, n);
    promtodos(reg,n);
    presentartodos(reg,n);
    bestalumno= maximo(reg,n);
    cout<<endl<<endl;
    cout<<"El mejor alumno es:..."<<endl;
    presentar(bestalumno);

}
