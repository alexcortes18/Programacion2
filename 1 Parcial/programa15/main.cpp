#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
Generar 10 numeros y contar cuantos son divisibles entre 5, el numero mayor y menor. (entre 200 y 500)
*/

int main()
{
    int num;
    int conta=0;
    int conta5=0;
    int mayor, menor;
    srand(time(0));

    mayor=0 ;menor=500;

    while(conta<10)
{   num= 200 + rand()%(501-200);

    conta++;

    if (num%5==0)
        conta5++;
    if (num>mayor)
        mayor= num;
    if (num<menor)
        menor=num;

    cout<<conta5<<"===>"<<num<<endl;
}
    cout<<"Numeros divisibles entre 5:..."<<conta5<<endl;
    cout<<"Menor:..."<<menor<<endl;
    cout<<"Mayor:..."<<mayor<<endl;








}
