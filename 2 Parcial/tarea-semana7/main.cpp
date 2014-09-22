#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;
/*
Elaborar un x 0 usando arreglo de dos dimensiones , donde la x y el 0 indican donde pondrán
su marca y cada vez que el jugador coloca su marca el programa deberá de decir si hubo ganador.
*/
int const lin=3;
int const col=3;
string xcero[lin][col] = {{"1","2","3"},{"4","5","6"},{"7","8","9"}};
string jugador1="X",jugador2= "0";
string jugadorno= "nadie";
string jugador3= "empate";
int turno=0;
int i=0;
int k=0;

void presentartablero(string xcero[][col], int lin, int col)
{
    cout<<"X-Cero!:"<<endl;
    cout<<"Instrucciones: Elija la posicion con la cual quiera marcar X/0:"<<endl<<endl;
    int l, c;
    for (l=0;l<lin;l++)
    {   cout<<"\t";
        for(c=0;c<col;c++)
        {
             cout<<"_"<<xcero[l][c]<<"|";
        }
        cout<<endl<<endl;
    }
}
void ingresar (string xcero[][col], int &turno)
{   int p;
    if (turno%2==0)
        cout<<"Jugador 1:"<<" "<<jugador1<<endl;
    else
        cout<<"Jugador 2:"<<" "<<jugador2<<endl;
    do
    {
        cout<<"Ingrese la posicion deseada (1-9) : ";
        cin>>p;
    }while(!((p>0) and (p<=9)));

    if(xcero[0][p-1]=="1" or xcero[0][p-1]=="2" or xcero[0][p-1]=="3" or xcero[0][p-1]=="4" or xcero[0][p-1]=="5" or xcero[0][p-1]=="6" or xcero[0][p-1]=="7" or xcero[0][p-1]=="8" or xcero[0][p-1]=="9")
    {
        if(turno%2==0)
            xcero[0][p-1]= "X";
        else
            xcero[0][p-1]= "0";
    }
    else
    {
      cout<<"Movimiento no valido, vuelva a intentar.";
      cout<<endl;
      turno=turno-1;
      k++;
    }
}
string revisarganador(string xcero[][col])
{   int i;

    for(i=0; i<3; i++) //revisar filas
    {
        if((xcero[i][0]==xcero[i][1] and xcero[i][0]==xcero[i][2]) and (xcero[i][0] == "X" or xcero[i][0] == "0"))
        {
            if(xcero[i][0]==xcero[i][1] and xcero[i][0]==xcero[i][2] and xcero[i][0] == "X")
            {   return jugador1;
                break;
            }
            else if (xcero[i][0]==xcero[i][1] and xcero[i][0]==xcero[i][2] and xcero[i][0] == "0")
            {   return jugador2;
                break;
            }
            else
            {   return jugadorno;
                break;
            }
        }
    }
    for(i=0; i<3; i++) //revisar columnas
    {
        if((xcero[0][i]==xcero[1][i] and xcero[0][i]==xcero[2][i]) and (xcero[0][i] == "X" or xcero[0][i] == "0"))
        {
            if(xcero[0][i]==xcero[1][i] and xcero[0][i]==xcero[2][i] and xcero[0][i] == "X")
            {   return jugador1;
                break;
            }
            else if (xcero[0][i]==xcero[1][i] and xcero[0][i]==xcero[2][i] and xcero[0][i] == "0")
            {   return jugador2;
                break;
            }
            else
            {   return jugadorno;
                break;
            }
        }
    }
    // revisar diagonales
    if(xcero[0][0]==xcero[1][1] and xcero[1][1]==xcero[2][2] and (xcero[0][0] == "X" or xcero[0][0] == "0"))
    {
        if(xcero[0][0]==xcero[1][1] and xcero[1][1]==xcero[2][2] and xcero[0][0] == "X")
            return jugador1;
        else if (xcero[0][0]==xcero[1][1] and xcero[1][1]==xcero[2][2] and xcero[0][0] == "0")
            return jugador2;
        else
            return jugadorno;
    }
    //revisar diagonales
    if(xcero[0][2]==xcero[1][1] and xcero[1][1]==xcero[2][0] and (xcero[0][2] == "X" or xcero[0][2] == "0"))
    {
        if(xcero[0][2]==xcero[1][1] and xcero[1][1]==xcero[2][0] and xcero[0][2] == "X")
            return jugador1;
        else if (xcero[0][2]==xcero[1][1] and xcero[1][1]==xcero[2][0] and xcero[0][2] == "0")
            return jugador2;
        else
            return jugador2;
    }
    return jugadorno;
}
void ganador(string xcero[][col])
{   string jugadorganador;
    jugadorganador= revisarganador(xcero);
    if (jugadorganador == jugador1)
    {   cout<<"El jugador 1 ha ganado!"<<endl;
        exit(0);
    }
    if (jugadorganador == jugador2)
    {   cout<<"El jugador 2 ha ganado!"<<endl;
        exit(0);
    }
    if  (jugadorganador == jugadorno)
        cout<<"Continuar la partida, no hay ganador aun!"<<endl;
}

void presentar(string xcero[][col], int turno)
{
    presentartablero(xcero,lin,col);

    do
    {   ingresar (xcero,turno);
        system("cls");
        presentartablero(xcero,lin,col);
        ganador(xcero);
        turno++;
        i++;
    }while (i<9+k);
        cout<<"Es un empate!"<<endl;
}
int main()
{
    presentar(xcero,turno);
}
