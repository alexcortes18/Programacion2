#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void ingresarlimite(int &li, int &ls)
{

    cout<<"Ingresar el limite superior:...";
    cin>>ls;

    do
    {
        cout<<"Ingresar el limite inferior:...";
        cin>>li;
    }while (li>ls);
}
int numeroaleatorio (int li, int ls)
{
    int numx;
    srand(time(0));
    numx= li + rand()%((ls+1)-li);
    return numx;
}

int suma(int numero)
{
    int cifra;
    int sumac=0;

    while(numero>0)
    {
        cifra= numero%10;
        if(cifra%5==0)
        sumac+= cifra;
        numero=numero/10;
    }
    return sumac;
}

void presentar (int numero)
{
    int cifra, i;
    cout<<"Presentacion de los digitos:"<<endl;
    while(numero>0)
    {
        cifra= numero%10;
        cout<<cifra;
        cout<<endl;
        numero=numero/10;
    }
}


int maximo(int numero)
{
    int mayor;
    int cifra;

    while(numero>0)
    {
        cifra= numero%10;
        if(cifra> mayor)
            mayor= cifra;
        else
            mayor= mayor;
        numero=numero/10;
    }
    return mayor;
}



int main()
{
int numero=0;
int ls, li, sumadecifras, mayor, i;

    for (i=0;i<5;i++)
    {
        ingresarlimite(li, ls);
        numero= numeroaleatorio(li,ls);
        sumadecifras= suma(numero);
        mayor= maximo(numero);
        cout<<"El numero generado es:..."<<numero<<endl;
        cout<<"La suma de las cifras divisibles entre 5 es:..."<<sumadecifras<<endl;
        presentar(numero);
        cout<<"El numero mayor de los digitos ingresados es:..."<<mayor<<endl;
        cout<<endl;
        cout<<endl;
    }

}
