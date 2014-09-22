#include <iostream>
#include <string>
#include <string.h>

using namespace std;
string cadena, insertado;

int main()
{
        cout<<"Ingresar la cadena:...";
        cin>>cadena;
        insertado= cadena.insert(1,"Juan");
        cout<<"Valor de insertado:..."<<insertado<<endl;
        string re;

        re= "BBBBB";
        re= re.replace (3,3,"Rommel");
        cout<<"Valor re:..."<<re<<endl;
        return 0;
}

