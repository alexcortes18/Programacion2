#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
/*
generar un numero entre 1-100 usando una función, luego elaborar una función
que nos devuelva la respuesta validada de S o N.
Pedir los numeros y presentar la suma.
*/
int generarNumero()
{
    int numx;
    srand(time(0));
    numx= 1+ rand()%(101-1);
    return numx;
}

char pedirrespuesta()
{
    char respuesx;
    do
    {
        cout<<"Desea continuar?:...";
        cin.get(respuesx);
        _flushall();
    }while ((respuesx!='N') and (respuesx!='S'));
}

void pedirnumeros (int num)
{
    int cifra;
    while(num>0)
    {
        cifra= num%10;
        cout<<"'"<<cifra<<"'"<<endl;
        num= num/10;
    }
}
int sumacifras (int num)
{
    int cifra,sumac=0;
    while(num>0)
    {
        cifra= num%10;
        sumac+= cifra;
        num= num/10;
    }
    return sumac;
}

int num;
char respuesta;
int sumadecifras;
int main()
{
    num= generarNumero();
    cout<<"El numero aleatorio generado es:..."<<num<<endl;
    sumadecifras= sumacifras(num);
    cout<<"La suma de cifras es:..."<<sumadecifras<<endl;
    pedirnumeros(num);
}
