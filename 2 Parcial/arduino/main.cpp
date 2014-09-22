#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    cout<<"Please enter a simple number"<<endl;
    int x;
    cin>>x;

    int p;
    cout<<"Select the bit corresponding to the number[: "<<x<<"]to turn on: "<<endl;
    cin>>p;

    int resultingNumber = x (1<<p);

    cout<< "The resulting number turn on the bit at the position: ["<<p<<"]is ["<<resultingNumber<<"]."<<endl<<endl;

    resultingNumber= x &~(1<<p);

    cout<<"Write the position of the bit to turn off the bit at the position: ["<<p<<"] is :["<<resultingNuber<<"]."<<endl<<endl;

}
