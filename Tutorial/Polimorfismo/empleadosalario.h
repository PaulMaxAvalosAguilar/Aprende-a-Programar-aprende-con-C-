#ifndef EMPLEADOSALARIO_H
#define EMPLEADOSALARIO_H

#include <string>
#include "Polimorfismo/empleado.h"

class EmpleadoSalario: public Empleado
{
public:
    EmpleadoSalario(std::string Nombre, double salarioMensual);
    virtual ~EmpleadoSalario();

    double getSalarioMensual() const;
    void setSalarioMensual(double value);

    virtual void calculaPago() override;
    virtual void imprime() override;

protected:
    double salarioMensual;
};




#endif // EMPLEADOSALARIO_H
