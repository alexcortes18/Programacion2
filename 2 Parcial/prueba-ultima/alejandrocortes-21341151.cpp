#include <iostream>

using namespace std;
/*
Se tiene que pedir un numero entero y guardar en la lista de punteros solo los pares
y luego preguntar si desea ingresar otro numero. Luego presentar la lista.
*/
struct nodo {
    int numero;
    struct nodo *siguiente;
    };
struct nodo *primero, *ultimo;
struct nodo *nuevo;
int main()
{
    char resp;
    primero = new nodo;
    ultimo = new nodo;
    primero= NULL;
    int xnum;
    do{
       nuevo = new nodo;
        cout<<"Ingresar un numero ";
        cin>>xnum;
        nuevo->numero=xnum;
        if(xnum%2==0)
       {
           nuevo->numero=xnum;
           nuevo->siguiente= NULL;

       if(primero ==NULL)
       {
       primero = nuevo;
       ultimo = nuevo;

       }
       else
       {
           ultimo ->siguiente = nuevo;
           ultimo = nuevo;
       }
       }
        do
        {
            cout<<"Desea Continuar....:";
            cin>>resp;
        }while (resp!='S' and resp!='N');
    }while (resp!='N');

        ultimo->siguiente= NULL;
        struct nodo *aux;
            aux= primero;
            cout<<"\nMostrando la lista completa:\n";
            while(aux!=NULL){
                cout<<"Numero "<<aux->numero<<"\n";
                aux = aux->siguiente;
            }
}
