#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Ingresar un numero y determinar cuantas cifras tiene, evaluar hasta cuatro cifras y luego decir si tiene mas
de 4 cifras.
No tiene que importar el signo se evaluara el valor absoluto.
*/

int main()
{
  int numero;

  cout<<"Ingrese un numero:...";
  cin>>numero;

  if (numero<0)
    numero= numero* (-1);

  if ((numero>=0) and (numero<10))
  cout<<"El numero ingresado tiene 1 cifra."<<endl;

  if ((numero>=10) and (numero<100))
  cout<<"El numero ingresado tiene 2 cifras."<<endl;

  if ((numero>=100) and (numero<1000))
  cout<<"El numero ingresado tiene 3 cifras."<<endl;

  if ((numero>=1000) and (numero<10000))
  cout<<"El numero ingresado tiene 4 cifras."<<endl;

  if (numero>=10000)
  cout<<"El numero ingresado tiene mas de 4 cifras."<<endl;

  system("PAUSE");


}
