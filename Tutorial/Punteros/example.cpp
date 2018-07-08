#include "example.h"
#include "Punteros/claseprueba.h"
#include <iostream>

using namespace std;

Example::Example()
    :a(new Claseprueba("uno"))
{
    a->getNombre().append("hola");
}

std::unique_ptr<Claseprueba> Example::getA()
{


    return std::move(a);
}

void Example::setA( std::unique_ptr<Claseprueba> value)
{
    unique_ptr<Claseprueba> v(move(value));
    a = std::move(v);
}

void Example::printAgain(){
    cout<<" Intentando obtener el puntero e imprimirlo desde el objeto"<<endl;
    cout<<a->getNombre()<<endl;
}
