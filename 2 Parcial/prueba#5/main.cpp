#include <iostream>

using namespace std;
/*
Elaborar un programa donde ingresemos datos en un arreglo bidimensional de 4 lineas y 5 columnas y dejemos la
ultima linea reservada para sumar los numeros pares. Si no hay pares debera de aparecer 0.
*/
int const lin=4;
int const col=5;
int bidi[lin][col];

void ingresar(int bidi[][col],int lin, int col)
{
    int l,c;
    for (l=0;l<lin-1;l++)
    {
        for(c=0;c<col;c++)
        {
            cout<<"Ingrese el numero["<<l<<"]"<<"["<<c<<"]:  ";
            cin>>bidi[l][c];
        }
    }
}
void presentar(int bidi[][col],int lin, int col)
{
    int l, c;
    for (l=0;l<lin;l++)
    {
        for(c=0;c<col;c++)
        {
            cout<<bidi[l][c]<<" ";
        }
        cout<<endl;
    }
}
void sumarpares (int bidi[][col], int col, int lin)
{   int l,c;

    for(c=0;c<col;c++)
        { bidi[lin-1][c]=0;
          for (l=0;l<lin-1;l++)
            {
                if (bidi[l][c]%2==0)
                    bidi[lin-1][c]+= bidi[l][c];

            }
            bidi[lin-1][c]=bidi[lin-1][c];
        }

}
int main()
{   ingresar(bidi,lin,col);
    sumarpares(bidi,col,lin);
    cout<<endl;
    presentar(bidi,lin,col);

}
