#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado
{
public:
    Empleado(std::string Nombre);
    virtual ~Empleado();

    std::string getNombre() const;
    void setNombre(const std::string &value);

    double getPago();
    virtual void calculaPago()=0;

    virtual void imprime()=0;

protected:
    std::string Nombre;
    double pago;
};





#endif // EMPLEADO_H
