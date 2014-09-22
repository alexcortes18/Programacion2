#include <iostream>
#include <stdlib.h>

using namespace std;

/*
Ingresar la nota acumulada y examen del alumno, calcular la nota final, luego de presentar si esta aprobado o
reprobado, ; luego de finalizar el ciclo presentar cuantos aprobados y reprobados hay.
Hacerlo para 5 alumnos.
*/

int main()
{
   int acumulado,examen,notafinal,alumno,contreprobado,contaprobado;
   alumno=0;
   contaprobado=0;
   contreprobado=0;



   while (alumno<5)
   {

   cout<<"Ingresar la nota acumulada:...";
   cin>>acumulado;

   cout<<"Ingresar la nota de examen:...";
   cin>>examen;

notafinal= acumulado + examen;

    cout<<"Ingresar la nota final:..."<<notafinal<<endl;

    alumno++;
  if (notafinal>=60)
    contaprobado++;
  else
   contreprobado++;

   if (notafinal>=60)
   cout<<"Aprobado"<<endl;
    else
        cout<<"Reprobado"<<endl;
}

cout<<"Numero de Aprobados:..."<<contaprobado<<endl;
cout<<"Numero de Reprobados:..."<<contreprobado<<endl;

system("PAUSE");
}
