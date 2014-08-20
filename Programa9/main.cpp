#include <iostream>

using namespace std;

/*
Se ingresa el nombre del aspirante, la edad, la experiencia, (1 o 0), si tiene titulo (1 o 0)
luego se imprime si esta contratado o no lo esta.
Si la edad esta entre 22-27 y tiene titulo se contrata o si tiene 15 años de experiencia.
*/
int main()
{
    int titulo, experiencia, edad;
    char nombre[30];

    cout<<"Ingresar el nombre del Aspirante...:";
    cin.getline(nombre,30);

    cout<<"Tiene Titulo:...";
    cin>>titulo;

    cout<<"Edad...:";
    cin>>edad;

    cout<<"Experiencia...:";
    cin>>experiencia;

if ((((edad>=22) and (edad<=27)) and (titulo==1)) or (experiencia>15))
    cout<<"Contratado";
else
    cout<<"Vuelve ha intentarlo, no esta contratado"<<endl;


}
