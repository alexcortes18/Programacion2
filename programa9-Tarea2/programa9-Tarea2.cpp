#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

int n,numero;

 cout<<"Ingrese el numero:...";
 cin>>numero;

while (numero>0)
{
    n=numero%10;
    numero=numero/10;

    cout<<n;
}
    cout<<endl;

system("PAUSE");


}
