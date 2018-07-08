#include "claseprueba.h"
#include <iostream>


using namespace std;

int Claseprueba::activos = 0;

Claseprueba::Claseprueba(std::string numero)
{
    setNumero(++activos);
    setNombre(numero);
    cout<<"Objeto de clase prueba #"<<this->getNumero()<<" creado"<<
          " con nombre: "<<this->getNombre()<<endl;
}

Claseprueba::Claseprueba(Claseprueba &prueba)
{
    setNumero(++activos);
    setNombre(prueba.getNombre());
    cout<<"Objeto copiado de clase prueba #"<<this->getNumero()<<" creado"<<
          " con nombre: "<<this->getNombre()<<endl;
}

Claseprueba::~Claseprueba()
{
    cout<<"Objeto de la clase prueba #"<<numero<<" destruido "<<
          "con nombre: "<<getNombre()<<endl;;
}

int Claseprueba::getNumero() const
{
    return numero;
}

void Claseprueba::setNumero(int value)
{
    numero = value;
}

std::string Claseprueba::getNombre() const
{
    return nombre;
}

void Claseprueba::setNombre(const std::string &value)
{
    nombre = value;
}
