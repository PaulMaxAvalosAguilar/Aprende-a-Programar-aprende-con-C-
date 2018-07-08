#ifndef EMPLEADOCOMISION_H
#define EMPLEADOCOMISION_H

#include <string>

class EmpleadoComision
{
public:
    EmpleadoComision(std::string nombre, std::string apellido, double ganancias,
                     double comision);

    std::string getNombre() const;
    void setNombre(const std::string &value);

    std::string getApellido() const;
    void setApellido(const std::string &value);

    double getGananciasGeneradas() const;
    void setGananciasGeneradas(double value);

    double getComision() const;
    void setComision(double value);

    virtual double getSalarioTotal();
    virtual void calculaSalarioTotal();

    virtual void imprimeReporte();

    virtual ~EmpleadoComision();


protected:
    std::string Nombre;
    std::string Apellido;
    double gananciasGeneradas;
    double comision;
    double salarioTotal;
};

#endif // EMPLEADOCOMISION_H
