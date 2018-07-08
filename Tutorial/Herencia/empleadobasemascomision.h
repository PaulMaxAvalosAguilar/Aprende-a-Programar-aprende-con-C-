#ifndef EMPLEADOBASEMASCOMISION_H
#define EMPLEADOBASEMASCOMISION_H

#include <string>

class EmpleadobasemasComision
{
public:
    EmpleadobasemasComision(std::string nombre, std::string apellido, double ganancias,
                            double comision, double salarioBase);

    std::string getNombre() const;
    void setNombre(const std::string &value);

    std::string getApellido() const;
    void setApellido(const std::string &value);

    double getGananciasGeneradas() const;
    void setGananciasGeneradas(double value);

    double getComision() const;
    void setComision(double value);

    double getSalarioBase() const;
    void setSalarioBase(double value);

    double getSalarioTotal();
    void calculaSalarioTotal();

    void imprimeReporte();


private:
    std::string Nombre;
    std::string Apellido;
    double gananciasGeneradas;
    double comision;
    double salarioBase;
    double salarioTotal;
};

#endif // EMPLEADOBASEMASCOMISION_H
