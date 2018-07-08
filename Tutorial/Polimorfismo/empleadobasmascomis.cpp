#include "empleadobasmascomis.h"
#include <iostream>
#include <typeinfo>

using namespace std;


Empleadobasmascomis::Empleadobasmascomis(std::string Nombre, double comision, double dineroenVentas, double sueldoBase)
    :Empleadocomis(Nombre, comision, dineroenVentas)
{
    this->sueldoBase = sueldoBase;

}

Empleadobasmascomis::~Empleadobasmascomis()
{
    cout<<"Se ha eliminado: "<<typeid(this).name()<<endl;
}

double Empleadobasmascomis::getSueldoBase() const
{
    return sueldoBase;
}

void Empleadobasmascomis::setSueldoBase(double value)
{
    sueldoBase = value;
}


void Empleadobasmascomis::calculaPago()
{
    pago = sueldoBase + (comision * dineronVentas);
}

void Empleadobasmascomis::imprime()
{
    cout<<"EMPLEADO BASE+COMISION"<<endl;
    cout<<"N: "<<getNombre()<<" Comisión: "<<getComision()
       <<" Ventas: "<< getDineronVentas()
      <<" SB:"<< getSueldoBase()
      <<" Pago: "<<getPago()<<endl;
}

