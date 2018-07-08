#include "empleadobasemascomision.h"
#include <string>
#include <iostream>

using namespace std;

EmpleadobasemasComision::EmpleadobasemasComision(string nombre, string apellido,
                                                 double ganancias, double comision, double salarioBase)
{
    this->Nombre = nombre;
    this->Apellido = apellido;
    this->gananciasGeneradas = ganancias;
    this->comision = comision;
    this->salarioBase = salarioBase;

}

std::string EmpleadobasemasComision::getNombre() const
{
    return Nombre;
}

void EmpleadobasemasComision::setNombre(const std::string &value)
{
    Nombre = value;
}

std::string EmpleadobasemasComision::getApellido() const
{
    return Apellido;
}

void EmpleadobasemasComision::setApellido(const std::string &value)
{
    Apellido = value;
}

double EmpleadobasemasComision::getGananciasGeneradas() const
{
    return gananciasGeneradas;
}

void EmpleadobasemasComision::setGananciasGeneradas(double value)
{
    gananciasGeneradas = value;
}

double EmpleadobasemasComision::getComision() const
{
    return comision;
}

void EmpleadobasemasComision::setComision(double value)
{
    comision = value;
}

double EmpleadobasemasComision::getSalarioBase() const
{
    return salarioBase;
}

void EmpleadobasemasComision::setSalarioBase(double value)
{
    salarioBase = value;
}

double EmpleadobasemasComision::getSalarioTotal()
{
    calculaSalarioTotal();
    return salarioTotal;
}

void EmpleadobasemasComision::calculaSalarioTotal()
{
    salarioTotal = salarioBase + (gananciasGeneradas * comision);
}

void EmpleadobasemasComision::imprimeReporte()
{
    cout<<"Nombre: "<<
          getNombre()<<"\nApellido:"
       <<getApellido()<<"\nGanancias Totales:"
      << getGananciasGeneradas()<<"\nComisión:"
      << getComision()<<"\nSalarioBase:"
      << getSalarioBase()<<"\nSalarioTotal:"<<
         getSalarioTotal()<<endl;
}
