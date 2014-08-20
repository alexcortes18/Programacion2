#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
/*Crear un resgistro con los siguientes datos
nombre, na,ne,nf.

Elaborar un procedimiento para ingresar los datos del registro, otro para presentar los datos del registro,
una función para devolver la nota final, una función para devolver una respuesta S o N.
Hacerlo varias veces hasta que el usuario diga que no , deberá de ir presentado los datos .
al final presentar el alumno con la mejor nota.
*/

struct notas{
    int na, ne, nf, respuesta, mayor=0;
    char nombre [30], mejoralumno[30];
};
notas reg;


void ingresar()
{
    cout<<"Ingresar el nombre:......";
    cin.getline(reg.nombre,30);

    cout<<"Ingresar el acumulado:.....";
    cin>>reg.na;

    cout<<"Ingresar nota de examen:...";
    cin>>reg.ne;

    cout<<endl;
    cout<<endl;

}
void presentar()
{
    cout<<"Informacion presentada.....:"<<endl;
    cout<<"     Nombre:....................:"<<reg.nombre<<endl;
    cout<<"     Nota acumulada:............:"<<reg.na<<endl;
    cout<<"     Nota de examen:............:"<<reg.ne<<endl;
    cout<<"     Nota final:................."<<reg.nf<<endl;
}

int notafinal(int &na, int &ne)
{
    reg.nf= reg.na+ reg.ne;
    return reg.nf;
}

char pedirrespuesta()
{
    char respx;
    do
    {
        cout<<"Desea continuar:...";
        cin.get(respx);
        _flushall();
    }while ((respx!='S') and (respx!='N'));
    return respx;
}

int maximo(int nf, int mayor)
{
    if (reg.nf>reg.mayor)
    {
    reg.mayor= reg.nf;
    strcpy (reg.mejoralumno, reg.nombre);
    return reg.nf;}
    else
    return reg.mayor;
}

int main()
{
    do
    {
        ingresar();
        reg.nf= notafinal(reg.na, reg.ne);
        reg.mayor= maximo(reg.nf, reg.mayor);
        presentar();
        _flushall();

        reg.respuesta= pedirrespuesta();

    }while (reg.respuesta!='N');


    cout<<"El alumno con la mejor nota es:...."<<reg.mejoralumno<<endl;
    cout<<"La mejor nota es:.................."<<reg.mayor<<endl;

}
