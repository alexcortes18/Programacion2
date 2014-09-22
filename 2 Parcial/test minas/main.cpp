#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
int const lin=4;
int const col=4;
string minas[lin][col] = {{"-","-","-","-"},{"-","-","-","-"},{"-","-","-","-"},{"-","-","-","-"}};

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
int main()
{
    presentartablero(minas,lin,col);
    aleatorio(minas,lin,col);
    presentartablero(minas,lin,col);
}
