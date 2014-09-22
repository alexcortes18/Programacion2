#include <iostream>

using namespace std;
const int n=5;
int num[n];
int suma=0;
int mayor;

void ingreso (int num[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Ingresar Num["<<i<<"]...:";
        cin>>num[i];
    }
}
void presentar (int num[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Ingresar Num["<<i<<"]...:"<<num[i]<<endl;
    }
}
int sumaarreglo(int num[], int n)
{
     int i;
     int xsuma=0;
    for(i=0;i<n;i++)
    {
        xsuma+=num[i];
    }
    return xsuma;
}
int maximo(int num[], int n)
{
    int i;
    int xmax=0;
    for (i=0; i<n; i++)
    {
        if(num[i]>xmax)
        {
            xmax=num[i];
        }
    }
    return xmax;
}

int pares (int num[], int n)
{
    int i;
    int sumapar=0;
    for (i=0; i<n; i++)
    {
        if(num[i]%2==0)
         sumapar+= num[i];
    }
    return sumapar;
}

int main()
{
    ingreso(num,n);
    presentar(num,n);
    suma= sumaarreglo(num, n);
    mayor=  maximo(num, n);
    cout<<"Suma del arreglo:..."<<suma<<endl;
    cout<<"El numero mayor:..."<<mayor<<endl;
    cout<<"La suma de los pares es:..."<<pares (num,n);
}
