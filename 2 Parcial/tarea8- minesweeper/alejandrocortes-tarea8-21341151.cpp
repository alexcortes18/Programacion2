#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;
/*
Se tiene un arreglo de 4 líneas
con 4 columnas, existen 4 minas puestas aleatoriamente.

Usted deberá de preguntar la línea
y la columna donde aplicara una marca, si usted pisa una mina el programa le dirá,
la misión será encontrar las 4 minas y así el programa termina.

El programa deberá de funcionar
para dos jugadores 1 y 2, uno juega primero y se guarda los intentos que tuvo
para encontrar las minas y luego el segundo jugador y el que menos intentos
tenga será el ganador.
*/
int const lin=4;
int const col=4;
string minas[lin][col] = {{"-","-","-","-"},{"-","-","-","-"},{"-","-","-","-"},{"-","-","-","-"}};
string minas2[lin][col] = {{"-","-","-","-"},{"-","-","-","-"},{"-","-","-","-"},{"-","-","-","-"}};
//jugador2:
string minasj2[lin][col] = {{"-","-","-","-"},{"-","-","-","-"},{"-","-","-","-"},{"-","-","-","-"}};
string minas2j2[lin][col] = {{"-","-","-","-"},{"-","-","-","-"},{"-","-","-","-"},{"-","-","-","-"}};
int l,c;
int lj2,cj2;
int d=0,e=0,f=0,g=0,m=0,n=0;
int q,t;


void presentartablero(string minas[][col], int lin, int col)
{   int l, c;
    for (l=0;l<lin;l++)
    {
        for(c=0;c<col;c++)
        {
             cout<<minas[l][c]<<"|";
        }
        cout<<endl<<endl;
    }
}
void presentartablero2(string minas2[][col], int lin, int col)
{   int l, c;
    for (l=0;l<lin;l++)
    {
        for(c=0;c<col;c++)
        {
             cout<<minas2[l][c]<<"|";
        }
        cout<<endl<<endl;
    }
}
void presentartableroj2(string minasj2[][col], int lin, int col)
{   int l, c;
    for (l=0;l<lin;l++)
    {
        for(c=0;c<col;c++)
        {
             cout<<minasj2[l][c]<<"|";
        }
        cout<<endl<<endl;
    }
}
void presentartablero2j2(string minas2j2[][col], int lin, int col)
{   int l, c;
    for (l=0;l<lin;l++)
    {
        for(c=0;c<col;c++)
        {
             cout<<minas2j2[l][c]<<"|";
        }
        cout<<endl<<endl;
    }
}
void aleatorio (string minas[][col], int lin, int col)
{   int l,c,numx,a=0,b=0;
    srand(time(0));
        do
        {
        for (l=0;l<lin;l++)
        {
            for (c=0;c<col;c++)
            {   if (a<4)
                {
                    numx= 0 + rand()%((1+1)-0);
                    if (numx==1)
                    {   minas[l][c]="M";

                        a++;
                    }
                    else
                    {   minas[l][c]="0";

                    }
                }
                else
                {   minas[l][c]="0";

                }
            }
        }
        }while (!(a=4));
}
void aleatorioj2(string minasj2[][col], int lin, int col)
{   int l,c,numx,a=0,b=0;
    srand(time(0));
        do
        {
        for (l=0;l<lin;l++)
        {
            for (c=0;c<col;c++)
            {   if (a<4)
                {
                    numx= 0 + rand()%((1+1)-0);
                    if (numx==1)
                    {   minasj2[l][c]="M";

                        a++;
                    }
                    else
                    {   minasj2[l][c]="0";

                    }
                }
                else
                {   minasj2[l][c]="0";

                }
            }
        }
        }while (!(a==4));
}
void ingresar(string minas[][col],int &l, int &c)
{
    do
    {   cout<<"Ingrese la linea (0 a 3): ";
        cin>>l;
    }while(!((l>=0) and (l<=3)));
    do
    {   cout<<"Ingrese la columna (0 a 3): ";
        cin>>c;
    }while(!((c>=0) and (c<=3)));
}
void ingresarj2(string minasj2[][col],int &l, int &c)
{
    do
    {   cout<<"Ingrese la linea (0 a 3): ";
        cin>>l;
    }while(!((l>=0) and (l<=3)));
    do
    {   cout<<"Ingrese la columna (0 a 3): ";
        cin>>c;
    }while(!((c>=0) and (c<=3)));
}
string devolvermina(string minas[][col],int l, int c)
{   if(minas2[l][c]=="-")
    {
    if(minas[l][c]=="M")
    {   minas[l][c]= "M";
    cout<<"Ha encontrado una mina!";
        d++;
    }
    else
    {minas[l][c]= "0";
    m++;
    }
    }
    if(minas2[l][c]=="-")
    {if(minas[l][c]=="M" or minas[l][c]=="0")
    ;
    }
    else
    e++;
    return minas[l][c];
}
string devolverminaj2(string minasj2[][col],int l, int c)
{   if(minas2j2[l][c]=="-")
    {
    if(minasj2[l][c]=="M")
    {   minasj2[l][c]= "M";
        cout<<"Ha encontrado una mina!";
        f++;
    }
    else
    {minasj2[l][c]= "0";
    n++;}
    }
    if(minas2j2[l][c]=="-")
    {if(minasj2[l][c]=="M" or minasj2[l][c]=="0")
    ;
    }
    else
    g++;
    return minasj2[l][c];
}
void tableronuevo(string minas[][col], int l, int c)
{   string minareal= devolvermina(minas,l,c);
    if(minas2[l][c]=="-")
    minas2[l][c]=minareal;
}
void tableronuevoj2(string minasj2[][col], int l, int c)
{   string minarealj2= devolverminaj2(minas,l,c);
    if(minas2j2[l][c]=="-")
    minas2j2[l][c]=minarealj2;
}

void presentar1(string minas[][col])
{
    presentartablero2(minas2,lin,col);
    do{
        aleatorio(minas, lin,col);
        cout<<"Jugador "<<1<<"!"<<endl;
        ingresar(minas,l,c);
        system("cls");
        tableronuevo(minas,l,c);
        cout<<endl<<endl;
        presentartablero2(minas2,lin,col);
        cout<<endl<<endl;
        q++;

    }while ((d<4) and (q<16+e));
}

void presentar2(string minasj2[][col])
{
    presentartablero2j2(minas2j2,lin,col);
    do{
        aleatorioj2(minasj2, lin,col);
        cout<<"Jugador "<<2<<"!"<<endl;
        ingresarj2(minasj2,l,c);
        system("cls");
        tableronuevoj2(minasj2,l,c);
        cout<<endl<<endl;
        presentartablero2j2(minas2j2,lin,col);
        cout<<endl<<endl;

        t++;
    }while ((f<4) and (t<16+g));
}


int main()
{
    cout<<"Turno del jugador 1!"<<endl;
    presentar1(minas);
    cout<<"---------------------------------------"<<endl;
    cout<<"Turno del jugador 2!"<<endl;
    presentar2(minasj2);
    cout<<"Movimientos validos del jugador 1: "<<d+m<<endl;
    cout<<"Movimientos validos del jugador 2: "<<f+n<<endl;
    if (d+m<f+n)
    {cout<<"Jugador 1 ha ganado en menos movimientos!"<<endl;
    cout<<"El juego ha terminado!";}
    else if (d+m>f+n)
    {cout<<"Jugador 2 ha ganado en menos moviemientos!"<<endl;
    cout<<"El juego ha terminado!";}
    else
    {cout<<"Es un empate!"<<endl;
    cout<<"El juego ha terminado!";}
    cout<<endl<<endl;
}










