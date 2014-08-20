#include <iostream>

using namespace std;
/*
Usar un registro para las variables.
Ingresar el nombre, horas, el turno (validar el turno entre 1 y 3),
con un procedimiento, y presentelos con otro procedimiento.
Calcule el pxh,ihss,pb,tp, mediante otra funcion.
Turno       Pxh
1           200
2           150
3           180

*/
struct registro{
int turno;
double pxh, ihss, pb, tp,horas;
char nombre[30];
};
registro reg;

void ingresar(char nombre[30], double horas, int turno)
{


    cout<<"Ingrese el nombre:...";
    cin.getline(reg.nombre,30);

    cout<<"Ingrese las horas trabajadas:...";
    cin>>reg.horas;

    do
    {
        cout<<"Ingrese el turno correcto entre 1 y 3:...";
        cin>>reg.turno;
    }while (!((reg.turno>=1) and (reg.turno<=3)));
}
void presentar(char nombre[30], double horas, int turno)
{
    cout<<"El nombre del usuario es:..."<<reg.nombre<<endl;
    cout<<"Las horas trabajadas fueron:..."<<reg.horas<<endl;
    cout<<"El turno trabajado es:..."<<reg.turno<<endl;
}
void calcular (double pb, double ihss, double pxh, double tp)
{

    switch (reg.turno)
    {
    case 1:
        reg.pxh= 200;
        break;
    case 2:
        reg.pxh= 150;
        break;
    case 3:
        reg.pxh= 180;
        break;

    reg.pb= reg.pxh * reg.horas;

    if (reg.pb>7000)
        reg.ihss= 245;
    else
        reg.ihss= reg.pb * 0.035;

    reg.tp= reg.pb - reg.ihss;
    }
}
void presentar2(  double pb, double ihss, double pxh, double tp)
{
    cout<<"El pago por hora es:..."<<reg.pxh<<endl;
    cout<<"El ihss es:..."<<reg.ihss<<endl;
    cout<<"El pago bruto es:..."<<reg.pb<<endl;
    cout<<"El total a pagar es:..."<<reg.tp<<endl;
}

int main()
{
    ingresar(reg.nombre, reg.horas, reg.turno);
    presentar(reg.nombre,reg.horas,reg.turno);
    calcular(reg.pb, reg.ihss, reg.pxh, reg.tp);
    presentar2(reg.pb,reg.ihss, reg.pxh, reg.tp);

}
