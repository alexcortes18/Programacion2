#include <iostream>
#include <string.h>

using namespace std;
const int t=4;
char nombre[t][30];
int num[t];

void ingresoCadenas(char nombre[t][30])
{   for(int i=0;i<=t;i++)
    {
        cout<<"Ingresar el nombre:...";
        cin.getline(nombre[i],30);
    }
}
void Comparar2 (char nombre[t][30])
{   char cadcompa[30];
    cout<<"Ingresar cadena a comparar:...";
    cin.getline(cadcompa,30);

    for(int i=0;i<=t;i++)
    {
        if (strcmp (nombre[i],cadcompa)==0)
        {
            cout<<"Comparacion correcta con "<<nombre[i]<<endl;
        }
    }
}
int contar (char nombre[])
{   int c=1;
    for (int k=0;k<strlen(nombre);k++)
    {
        switch (nombre[k])
        {
            case ' ':
                c++;
                break;
            default:
                break;
        }
    }
    return c;
}


void contarPalabras(char nombre[t][30])
{   int conta=0;
    for(int i=0;i<=t;i++)
    {
        conta= contar(nombre[i]);
        cout<<nombre[i]<<"Tiene "<<conta<<" palabras"<<endl;
    }
}

int main()
{
    ingresoCadenas(nombre);
    contarPalabras(nombre);
    cout<<endl;

    Comparar2(nombre);
}
