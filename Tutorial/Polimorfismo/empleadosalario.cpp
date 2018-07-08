#include "empleadosalario.h"
#include <iostream>
#include <typeinfo>

using namespace std;


EmpleadoSalario::EmpleadoSalario(string Nombre, double salarioMensual)
    :Empleado(Nombre)
{
    this->salarioMensual = salarioMensual;
}

EmpleadoSalario::~EmpleadoSalario()
{
    cout<<"Se ha eliminado: "<<typeid(this).name()<<endl;
}

double EmpleadoSalario::getSalarioMensual() const
{
    return salarioMensual;
}

void EmpleadoSalario::setSalarioMensual(double value)
{
    salarioMensual = value;
}



void EmpleadoSalario::calculaPago()
{
    pago = salarioMensual;
}

void EmpleadoSalario::imprime()
{
    cout<<"EMPLEADO SALARIO"<<endl;
    cout<<"N: "<<Nombre<<" SM: "<<salarioMensual<<" Pago: "<<getPago()<<endl;
}
