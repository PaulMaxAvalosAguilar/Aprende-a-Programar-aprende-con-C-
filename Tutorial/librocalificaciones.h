#ifndef LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_H

#include <string>
#include <iostream>
#include <iomanip>


class LibroCalificaciones
{
public:

    LibroCalificaciones(std::string cadena);

    void mensage(std::string nombreCurso);

    void setNombreCurso(std::string cadena);
    std::string getNombreCurso() const;

    void sacarPromedios();
    void mostrarReporte();


private:
    std::string nombreCurso;
    int A;
    int B;
    int C;

};





#endif // LIBROCALIFICACIONES_H
