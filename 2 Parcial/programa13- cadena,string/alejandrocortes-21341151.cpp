#include <iostream>
#include <string.h>
#include <string>

using namespace std;
/*
Se tiene que buscar una cadena dentro de otra cadena y luego sustituir la cadena por X
donde la encuentre.
*/

int main()
{   string cadena1, cadena2, com1;

    cout<<"Escribir una cadena de texto:...";
    getline(cin,cadena1,'\n');

    cout<<"Cadena a buscar dentro de la cadena de texto:...";
    cin>>cadena2;

    int largo= cadena1.size();
    int largo2= cadena2.size();
    int i;
    int bandera=0;

    for(i=0;i<largo;i++)
    {
        com1= cadena1.substr(i,largo2);
        if(com1==cadena2)
        {
            bandera=1;
            break;
        }
    }
    if (bandera==1)
    {
        cout<<"Se ha encontrado la cadena: "<<com1<<endl;

       string rep= com1;
       string equis= "X";
       string equis2;
       for (i=0;i<largo2-1;i++)
        {
         equis2=equis.replace(0,i,equis);
        }
        rep= rep.replace (0,largo2,equis2);
        cout<<"Valor reemplazado:..."<<rep<<endl;

    }
    else
    {
        cout<<"No existe la cadena. "<<endl;
    }
}
