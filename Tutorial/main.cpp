#include <iostream> //Se incluye la funcionalidad para imprimir en pantalla
#include "Punteros/claseprueba.h"
#include "Punteros/example.h"
#include "Punteros/nodo.h"
#include <memory>
#include "Punteros/lista.h"


using namespace std;

extern template class Lista<Claseprueba>;


void funcion2(){
    Claseprueba prueba("1");
    Claseprueba prueba2("2");


    Lista<Claseprueba> lista;
    lista.insertarEnFrente(prueba);
    lista.insertarEnFrente(prueba2);




    Nodo<Claseprueba> *nodoactual = (*lista.getprimerNodo()).get();
    for(int i = 1; i<= lista.getTamanio(); i++){
        cout << (*nodoactual->getDato())->getNombre()<<' ';
        nodoactual = (*nodoactual->getSiguienteptr()).get();
    }

}

//Función donde se empieza a correr el programa
int main(){
    funcion2();

    cout<<"Aquí termina la función main()"<<endl;
return 0;
}//Fin de la función

