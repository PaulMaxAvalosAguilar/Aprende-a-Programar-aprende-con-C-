#include <iostream>
#include <string>
#include "lista.h"
#include "tv.h"
#include "example.h"
#include <memory>
#include "claseprueba.h"
#include "listaNodo.h"
using namespace std;

extern template class Lista<Claseprueba>;

void funcion2(){
    Claseprueba prueba("1");
    Claseprueba prueba2("2");
    Claseprueba prueba3("3");
    Claseprueba prueba4("4");

    Lista<Claseprueba> lista;
    lista.insertaEnFrente(&prueba);
    lista.insertaEnFrente(&prueba2);
    lista.insertaEnFrente(&prueba3);
    lista.insertaAtras(&prueba4);
    lista.removerFrente();
    lista.removerFrente();
    lista.removerAtras();

    ListaNodo<Claseprueba> *nodoactual= lista.getprimerNodo()->get();
    for(int i = 1; i<=lista.getTamanio(); i++){

        cout<<(*nodoactual->getDato())->getNombre()<<' ';
        nodoactual = nodoactual->getsiguienteptr()->get();
    }

}


int main()
{
    funcion2();
    cout<<"Programa concluido con exito"<<endl;
    return 0;
}
