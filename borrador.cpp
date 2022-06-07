#include <iostream>
using namespace std;
struct Nodo{
     int dato;
	 Nodo *siguiente;
};

void ingresarLista(Nodo *&lista, int dato){
    Nodo *p = new Nodo();
    p->dato = dato;
    p->siguiente = lista;
    lista = p;
}

void mostrarLista(Nodo *lista2){
	int suma=0;
	Nodo *p2;
	p2=lista2;
	while(p2!=NULL){
		cout<<p2->dato<<", ";
		suma = suma + p2->dato; 
        p2 = p2->siguiente; 
    } 
    cout<<"\nLa suma es: "<<suma;
		
}

int main(){
	Nodo *L=NULL; 
	
	for(int i=5; i>0; i++){
		ingresarLista(L,i);
	}
	return 0;
}
