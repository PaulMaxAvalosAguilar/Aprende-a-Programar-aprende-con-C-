#ifndef EMPLEADOBASMASCOMIS_H
#define EMPLEADOBASMASCOMIS_H

#include <string>
#include "Polimorfismo/empleadocomis.h"

class Empleadobasmascomis: public Empleadocomis
{
public:
    Empleadobasmascomis(std::string Nombre, double comision, double dineroenVentas,
                        double sueldoBase);
    virtual ~Empleadobasmascomis();

    double getSueldoBase() const;
    void setSueldoBase(double value);

    virtual void calculaPago() override;
    virtual void imprime() override;

protected:
    double sueldoBase;
};

#endif // EMPLEADOBASMASCOMIS_H
