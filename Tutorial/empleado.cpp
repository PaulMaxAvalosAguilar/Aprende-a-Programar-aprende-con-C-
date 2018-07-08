#include "empleado.h"
#include <iostream>

using namespace std;

Empleado::Empleado(const std::string nombre, const std::string apellido,
                   const Tiempo &horEntrado, const Tiempo &horSalida)
    :Nombre(nombre), Apellido(apellido), tiempoEntrada(horEntrado),
      tiempoSalida(horSalida)
{

}

void Empleado::imprimir() const
{
    cout<<Nombre<<endl;
    cout<<Apellido<<endl;
    cout<<"Hora Entrada: ";
    tiempoEntrada.imprimeEstandar();
    cout<<endl;
    cout<<"Hora Salida: ";
    tiempoSalida.imprimeEstandar();
    cout<<endl;

}
