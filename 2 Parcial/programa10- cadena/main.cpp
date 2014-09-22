#include <iostream>
#include <string.h>

using namespace std;
/*
Elaborar un programa donde se ingrese una cadena de texto y luego usando un procedimiento se
sustituyan las vocales por X.
*/

char cadena[30];

void cambiarvocales(char cadena[])
{   int i,k;
    for(i=0;i<=strlen(cadena);i++)
    {
        switch(cadena[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cadena[i]= 'X';
                break;
            default:
                break;
        }
    }
}
void presentar(char cadena[])
{   int i,k;
    for (i=0; i<=strlen(cadena);i++)
    {
        for(k=0;k<i;k++)
        {
            cout<<cadena[k];
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"Ingresar Cadena de Texto:...";
    cin.getline(cadena,30);
    cambiarvocales(cadena);
    cout<<cadena<<endl;
    presentar(cadena);
}
