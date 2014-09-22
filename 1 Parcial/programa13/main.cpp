#include <iostream>

using namespace std;

int main()
{
    int numero,n;

    cout<<"Ingresar un numero..:";
    cin>>numero;

    if (numero>999)
        cout<<"Debe de ser de 3 cifras o menos";
    else
{
    n= numero%10;
    numero= numero/10;
    cout<<n;

    if(numero>0)
     {n= numero%10;
    numero= numero/10;
    cout<<n;}

    if (numero>0)
    {n=numero%10;
    cout<<n;}
}
}
