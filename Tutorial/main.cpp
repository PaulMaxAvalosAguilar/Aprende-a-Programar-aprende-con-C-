#include <iostream> //Se incluye la funcionalidad para imprimir en pantalla
#include "Punteros/claseprueba.h"
#include "Punteros/example.h"
#include "Punteros/nodo.h"
#include <memory>

using namespace std;

//Función donde se empieza a correr el programa
int main(){

    shared_ptr<Claseprueba> ptr(new Claseprueba("uno"));
    shared_ptr<Claseprueba> ptr2(new Claseprueba("dos"));

    Nodo<Claseprueba> nodo(ptr);

    cout<< "Dato guardado en clase Nodo"
           "con el nombre:" <<(*nodo.getDato())->getNombre()<<endl;


    nodo.setDato(&ptr2);

    cout<< "Dato guardado en clase Nodo"
               "con el nombre:" <<(*nodo.getDato())->getNombre()<<endl;

    Claseprueba &prueba = (*new Claseprueba("tres"));
    delete prueba;



return 0;
}//Fin de la función

