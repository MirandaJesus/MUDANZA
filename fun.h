#include <iostream>     //Jesus Miranda Moreno :*
#include <stdlib.h>
#include<string>
#include<iomanip>
using namespace std;
 int time;
struct nodo{
       string Nombre;//Lista
       int num;
	   int tiempo; 
	   	   struct nodo *sgte;
};
 
typedef struct nodo *Tlista;
 
Tlista HacerlistaI(Tlista &lista,string nomm, int numer, int tm)
{
    Tlista q;
    q = new(struct nodo);
    q->Nombre = nomm;
    q->num = numer;
    q->tiempo = tm;
    q->sgte = lista;
    lista  = q;
    time+=tm;
    return q;
    
}
 

void reportarLista(Tlista lista)
{
     int i = 0;
 	cout<< "+---------------------------+---------------------------+--------------------------------\n";
     while(lista != NULL)
     {
          cout << "|" <<"Articulo"<< i+1 <<": " << left << setw(16)<< lista->Nombre << "|NO. "<< setw(21)<<lista->num<<"Se tardo: "<< lista->tiempo<<"min en cargarla"<< endl;
		  lista = lista->sgte;
          i++;
     } 
     cout<< "+---------------------------+---------------------------+-------------------------------\n";
}

void eliminarElemento(Tlista &lista)
{
    Tlista p, ant;
    p = lista;
    if(lista!=NULL)
    {
        while(p!=NULL)
        {
                if(p==lista)
                    lista = lista->sgte;
                else
                    ant->sgte = p->sgte;
 
                delete(p);
                return;
            }
           // ant = p;
            p = p->sgte;
        }
    else
        cout<<" Lista vacia..!";
        
}
void menu1()
{
    cout<<"\n\t\tQUE ACCION QUIERE REALIZAR\n\n";
    cout<<" 1. METER ARTICULO               "<<endl;
    cout<<" 2. SACAR ARTICULO               "<<endl;
    cout<<" 3. REPORTAR TIEMPO              "<<endl;
    cout<<" 4. SALIR                        "<<endl;

    cout<<"\n INGRESE OPCION: ";
}
