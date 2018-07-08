#include "claseprueba.h"
#include <iostream>
using namespace std;

int Claseprueba::elementos_activos = 0;

Claseprueba::Claseprueba(std::string nombre)
{
    setNumero(++elementos_activos);
    setNombre(nombre);
    cout<<"Objeto \t\t de clase prueba #"<<this->getNumero()<<
          " creado con nombre:"<<this->getNombre()<<endl;

}

Claseprueba::Claseprueba(Claseprueba &prueba)
{
    setNumero(++elementos_activos);
    setNombre(prueba.nombre);
    cout<<"Objeto [COPIADO] de clase prueba #"<<this->getNumero()<<
          " creado con nombre:"<<this->getNombre()<<endl;
}

Claseprueba::~Claseprueba()
{
    cout<<"Objeto de clase prueba #"<<this->getNumero()<<
              " destruido con nombre:"<<this->getNombre()<<endl;

}

int Claseprueba::getNumero() const
{
    return numero;
}

void Claseprueba::setNumero(int value)
{
    numero = value;
}

string &Claseprueba::getNombre()
{
    return nombre;
}

void Claseprueba::setNombre(const std::string &value)
{
    nombre = value;
}
