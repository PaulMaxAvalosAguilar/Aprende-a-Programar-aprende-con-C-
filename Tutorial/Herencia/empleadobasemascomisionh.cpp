#include "empleadobasemascomisionh.h"
#include <string>
#include <iostream>

using namespace std;


EmpleadobasemascomisionH::EmpleadobasemascomisionH(string nombre, string apellido, double ganancias,
                                                   double comision, double salBase)
    :EmpleadoComision(nombre, apellido, ganancias,comision)
{
    setSalarioBase(salBase);
}

double EmpleadobasemascomisionH::getSalarioBase() const
{
    return salarioBase;
}

void EmpleadobasemascomisionH::setSalarioBase(double value)
{
    salarioBase = value;
}

double EmpleadobasemascomisionH::getSalarioTotal()
{

    calculaSalarioTotal();
    return salarioTotal;
}

void EmpleadobasemascomisionH::calculaSalarioTotal()
{


    salarioTotal = salarioBase + (getGananciasGeneradas() * getComision());
}

void EmpleadobasemascomisionH::imprimeReporte()
{
    cout<<"Nombre: "<<
              getNombre()<<"\nApellido:"
           <<getApellido()<<"\nGanancias Totales:"
          << getGananciasGeneradas()<<"\nComisión:"
          << getComision()<<"\nSalarioBase:"
          << getSalarioBase()<<"\nSalarioTotal:"<<
             getSalarioTotal()<<endl;
}
