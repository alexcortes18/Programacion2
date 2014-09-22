#include <iostream>
#include <stdlib.h>

using namespace std;
/*
Crear un registro con los campos de nombre, na, ne, nf.
Luego calcular la nf y presentar la observacion.
Validar que cada una el acumulado esta entre 0-40 y la nota examen entre 1-60.
*/

struct notas
{
    char nombre [30];
    int na,ne,nf;

};

notas notas1;
int main()
{
    cout<<"Ingresar el nombre:...";
    cin.getline(notas1.nombre,30);

    do
    {
        cout<<"Ingresar el acumulado:...";
        cin>>notas1.na;
    }while (!((notas1.na>=0) and (notas1.na<=40)));

    do
    {
        cout<<"Ingresar la nota de examen:...";
        cin>>notas1.ne;
    }while (!((notas1.ne>=1) and (notas1.ne<=60)));

    notas1.nf= notas1.na + notas1.ne;

    cout<<"Nota final obtenida:..."<<notas1.nf<<endl;

    if (notas1.nf>=60)
        cout<<"El alumno paso la clase"<<endl;
    else
        cout<<"El alumno no paso la clase"<<endl;

system("PAUSE");

}
