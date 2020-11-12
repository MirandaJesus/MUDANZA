#include"fun.h"
int main()
{
    Tlista lista = NULL;
    int op;     // opcion del menu
    string _dato;    //elemento a ingresar
    int _dato2,_dato3;  // elemenento a ingresar
 	system("color 0b"); 
    do
    {
        menu1();  cin>> op;
 
        switch(op)
        {
            case 1: 
                cout<< "\n ARTICULO: ";
				fflush(stdin); 
				getline(cin,_dato);
                fflush(stdin);
                cout<< "\n NUMERO: "; cin>> _dato2;
                fflush(stdin);
                cout<< "\n TIEMPO DE ACCION: "; cin>> _dato3;
                HacerlistaI(lista, _dato,_dato2,_dato3);
                reportarLista(lista);
            break;
 
 
            case 2:
            	time=+time;
            	eliminarElemento(lista);
            	reportarLista(lista);
            break;
            
            case 3:
            	cout << "EL TIEMPO TOTAL DE DESCARGAR TODOS LOS ARTICULOS DEL  CAMION ES: "<<time <<" MINUTOS";
            break;			 
		}
		
        cout<<endl<<endl;
        system("pause"); system("cls");
 
    }while(op!=4);
 
 
   system("pause");
   return 0;
}
