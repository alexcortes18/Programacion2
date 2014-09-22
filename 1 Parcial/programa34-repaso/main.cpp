#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
/*
Generar un numero entre 1-500 usando una funcion.
Elaborar otra funcion donde nos devuelva la suma de las cifras pares del numero ingresado.
Elaborar un procedimiento donde se presente las cifras del numero ingresado con asteriscos.
543
3***
4****
5****
Hacerlo hasta que el usario diga que no quiere continuar.
*/


int generarNumero()
{
    int numx;
    srand(time(0));
    numx= 1 + rand()%(501-1);
    return numx;
}

int sumapares (int num)
{
    int cifra;
    int sumacifra=0;

    while (num>0)
    {
        cifra= num%10;
        if(cifra%2==0)
        {sumacifra+= cifra;}
        num= num/10;
    }
    return sumacifra;
}
void presentar (int num)
{
    int cifra,i;
    while (num>0)
    {
        cifra= num%10;
        cout<<cifra;
        for(i=0;i<cifra;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        num= num/10;
    }
}

char pedirrespuesta()
{
    char respuesx;
    do
    {
        cout<<"Desea continuar? (S/N):...";
        cin.get(respuesx);
        _flushall();
    }while ((respuesx!='S') and (respuesx!='N'));
    return respuesx;
}

int num, sumadepares;
char respuesta;

int main()
{
    do
    {
        num= generarNumero();
        sumadepares= sumapares(num);
        presentar(num);
        cout<<"Numero generado es:"<<num<<endl;
        cout<<"Suma de las cifras pares:"<<sumadepares<<endl;
        respuesta= pedirrespuesta();
    }while (respuesta!='N');
    cout<<endl;

}
