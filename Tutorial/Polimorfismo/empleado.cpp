#include "Polimorfismo/empleado.h"


using namespace std;

Empleado::Empleado(string Nombre)
{
    this->Nombre = Nombre;
}

Empleado::~Empleado()
{

}

std::string Empleado::getNombre() const
{
    return Nombre;
}

void Empleado::setNombre(const std::string &value)
{
    Nombre = value;
}

double Empleado::getPago()
{
    calculaPago();
    return pago;
}

void Empleado::calculaPago()
{

}

void Empleado::imprime()
{

}
