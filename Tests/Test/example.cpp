#include "example.h"
#include <iostream>

Example::Example()
    :a(new std::string)
{
    a.get()->operator =("Hola");
    std::cout <<*(a.get())<<std::endl;
}

std::unique_ptr<std::string> Example::getA()
{
    std::unique_ptr<std::string> ptr(new std::string);
    ptr->append("Texto en movimiento");
    return ptr;
}

void Example::setA( std::unique_ptr<std::string> value)
{
    std::unique_ptr<std::string> v(move(value));
    std::cout<<*(v.get())<<std::endl;
    a = std::move(v);
}

void Example::printAgain()
{
    std::cout<<"Intentando obtener el puntero miembro e imprimirlo"<<std::endl;
    std::cout<< *(a.get()) <<std::endl;
}



