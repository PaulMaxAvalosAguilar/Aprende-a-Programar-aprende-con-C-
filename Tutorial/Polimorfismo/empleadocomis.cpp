#include "Polimorfismo/empleadocomis.h"
#include <iostream>
#include <typeinfo>

using namespace std;

Empleadocomis::Empleadocomis(std::string Nombre, double comision, double dineroenVentas)
    :Empleado(Nombre)
{
    this->comision = comision;
    this->dineronVentas = dineroenVentas;
}

Empleadocomis::~Empleadocomis()
{
    cout<<"Se ha eliminado: "<<typeid(this).name()<<endl;
}

double Empleadocomis::getComision() const
{
    return comision;
}

void Empleadocomis::setComision(double value)
{
    comision = value;
}



void Empleadocomis::calculaPago()
{
    pago = dineronVentas * comision;
}

void Empleadocomis::imprime()
{
    cout<<"EMPLEADO COMISIÓN"<<endl;
    cout<<"N: "<<getNombre()<<" Comisión: "<<getComision()
       <<" Ventas: "<< getDineronVentas()
       <<" Pago: "<<getPago()<<endl;
}

double Empleadocomis::getDineronVentas() const
{
    return dineronVentas;
}

void Empleadocomis::setDineronVentas(double value)
{
    dineronVentas = value;
}
