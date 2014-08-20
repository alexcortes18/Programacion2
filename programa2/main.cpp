#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Ingresar las horas trabajadas y el pago por hora del empleado
luego de terminar su pago de horas , la deduccion del Rap que es el 1.5% del ingreso , presentar el total a pagar.
*/

int main()
{   int horas,pxh,phoras,rap,totalp;

    cout<<"Ingresar las horas trabajadas...:";
    cin>>horas;

    cout<<"Ingresar el Pago por Hora...:";
    cin>>pxh;

    phoras = pxh * horas;
    rap = phoras * 0.015;
    totalp = phoras - rap;

    cout<<"Pago total de horas es...:"<<phoras<<"\n";
    cout<<"Deduccion del rap...:"<<rap<<"\n";
    cout<<"Total de pagar...:"<<totalp<<"\n";

    system("PAUSE");







}
