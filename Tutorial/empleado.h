#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include "tiempo.h"

class Empleado
{
public:
    Empleado(const std::string , const std::string, const Tiempo &
             , const Tiempo &);

    void imprimir() const ;

private:
    std::string Nombre;
    std::string Apellido;
    Tiempo tiempoEntrada;
    Tiempo tiempoSalida;
};

#endif // EMPLEADO_H
