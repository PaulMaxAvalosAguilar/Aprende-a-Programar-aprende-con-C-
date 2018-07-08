#ifndef EMPLEADOBASEMASCOMISIONH_H
#define EMPLEADOBASEMASCOMISIONH_H

#include "empleadocomision.h"
#include <string>


class EmpleadobasemascomisionH: public EmpleadoComision
{
public:
    EmpleadobasemascomisionH(std::string nombre, std::string apellido, double ganancias, double comision, double salBase);

    double getSalarioBase() const;
    void setSalarioBase(double value);


    virtual double getSalarioTotal() override;
    virtual void calculaSalarioTotal() override;

    virtual void imprimeReporte() override;



private:

    double salarioBase;

};

#endif // EMPLEADOBASEMASCOMISIONH_H
