#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
/*
Ingresar un numero entero , luego  sumar los dígitos  que tiene el numero,
contar cuantos son pares e impares y obtener el promedio de los dígitos del numero.
*/

{
    int numero,n=0;
    int suma=0;
    int promedio=0;
    int contpar=0;
    int contimpar=0;
    int cont=0;

    cout<<"Ingresar un numero entero:...";
    cin>>numero;


    while (numero>0)
    {
        n= numero%10;
        numero= numero/10;
        cont++;

            if (n%2==0)
            contpar++;
            else
            contimpar++;


        suma= n + suma;
    }

promedio = suma/ cont;

cout<<"La suma de los numeros es:..."<< suma << endl;
cout<<"Numero de pares:..."<<contpar<<endl;
cout<<"Numero de impares:..."<<contimpar<<endl;
cout<<"Promedio de numeros:..."<<promedio<<endl;

system("PAUSE");

}
