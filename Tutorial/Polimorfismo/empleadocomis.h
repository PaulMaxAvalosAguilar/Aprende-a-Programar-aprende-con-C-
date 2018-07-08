#ifndef EMPLEADOCOMIS_H
#define EMPLEADOCOMIS_H

#include "Polimorfismo/empleado.h"
#include <string>

class Empleadocomis: public Empleado
{
public:
    Empleadocomis(std::string Nombre, double comision, double dineroenVentas);
    virtual ~Empleadocomis();

    double getComision() const;
    void setComision(double value);

    virtual void calculaPago() override;
    virtual void imprime() override;

    double getDineronVentas() const;
    void setDineronVentas(double value);

protected:
    double comision;
    double dineronVentas;
};

#endif // EMPLEADOCOMIS_H
