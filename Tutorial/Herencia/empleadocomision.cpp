#include "empleadocomision.h"
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

EmpleadoComision::EmpleadoComision(string nombre, string apellido, double ganancias,
                                   double comision)
{
    this->Nombre = nombre;
    this->Apellido = apellido;
    this->gananciasGeneradas = ganancias;
    this->comision = comision;
}

std::string EmpleadoComision::getNombre() const
{
    return Nombre;
}

void EmpleadoComision::setNombre(const std::string &value)
{
    Nombre = value;
}

std::string EmpleadoComision::getApellido() const
{
    return Apellido;
}

void EmpleadoComision::setApellido(const std::string &value)
{
    Apellido = value;
}

double EmpleadoComision::getGananciasGeneradas() const
{
    return gananciasGeneradas;
}

void EmpleadoComision::setGananciasGeneradas(double value)
{
    gananciasGeneradas = value;
}

double EmpleadoComision::getComision() const
{
    return comision;
}

void EmpleadoComision::setComision(double value)
{
    if(value >=0  && value <= 0){
        comision = value;
    }else{
        throw invalid_argument("El valor de la comisión de be de estar entre 1 y 0");
    }

}

double EmpleadoComision::getSalarioTotal()
{
    calculaSalarioTotal();
    return salarioTotal;
}

void EmpleadoComision::calculaSalarioTotal()
{
    salarioTotal = gananciasGeneradas * comision;
}

void EmpleadoComision::imprimeReporte()
{
    cout<<"Nombre: "<<
       getNombre()<<"\nApellido:"
       <<getApellido()<<"\nGanancias Totales:"
      << getGananciasGeneradas()<<"\nComisión:"
      << getComision()<< "\nSalarioTotal:"<<
         getSalarioTotal()<<endl;


}

EmpleadoComision::~EmpleadoComision()
{

}
