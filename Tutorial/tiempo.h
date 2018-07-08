#ifndef TIEMPO_H
#define TIEMPO_H

#include <iostream>


class Tiempo
{
public:

    friend std::ostream &operator<<(std::ostream &, const Tiempo &);



    Tiempo();
    explicit Tiempo(int);
    Tiempo(int, int);
    Tiempo(int, int, int);



    void setTiempo(int,int,int);
    void imprimeUniversal() const;
    void imprimeEstandar() const;


    unsigned int getHora() const;
    Tiempo & setHora(unsigned int value);

    unsigned int getMinutos() const;
    Tiempo & setMinutos(unsigned int value);

    unsigned int getSegundos() const;
    Tiempo & setSegundos(unsigned int value);

    unsigned int &getHoraFormatoEspecial();

    ~Tiempo();

    static int contador;

private:
    unsigned int hora;
    unsigned int minutos;
    unsigned int segundos;

};

#endif // TIEMPO_H
