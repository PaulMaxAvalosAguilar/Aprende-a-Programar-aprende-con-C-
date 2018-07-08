#include <iostream>
#include <stdexcept>
#include "tiempo.h"

using namespace std;


int Tiempo::contador = 0;


ostream &operator<<(ostream & output, const Tiempo &t)
{
    t.imprimeEstandar();
    return output;
}




Tiempo::Tiempo()
{
    setTiempo(0,0,0);
    contador++;
}

Tiempo::Tiempo(int h)
{
    setTiempo(h, 0,0);
    contador++;
}

Tiempo::Tiempo(int h, int m)
{
    setTiempo(h,m,0);
    contador++;
}

Tiempo::Tiempo(int h,int m, int s)
{
    setTiempo(h,m,s);
    contador++;
}


void Tiempo::setTiempo(int h, int m, int s)
{
    if((h >= 0 && h <24)  && (m>=0 && m <60) &&
            (s>= 0 && s<60)){
        setHora(h);
        setMinutos(m);
        setSegundos(s);

    }else
        throw invalid_argument("La hor, minuto o segundos están fuera del rango");

}

void Tiempo::imprimeUniversal() const
{
    cout<<hora<<":"<<minutos<<":"<<segundos;

}

void Tiempo::imprimeEstandar() const
{
    cout << ((hora == 0 || hora == 12)? 12: hora%12) <<":"<<minutos<<":"<<segundos
         <<  (hora <12? "AM":"PM");

}

unsigned int Tiempo::getHora() const
{
    return hora;
}

Tiempo & Tiempo::setHora(unsigned int value)
{
    hora = value;
}

unsigned int Tiempo::getMinutos() const
{
    return minutos;
}

Tiempo & Tiempo::setMinutos(unsigned int value)
{
    minutos = value;
}

unsigned int Tiempo::getSegundos() const
{
    return segundos;
}

Tiempo & Tiempo::setSegundos(unsigned int value)
{
    segundos = value;
}

unsigned int &Tiempo::getHoraFormatoEspecial()
{
    return hora;
}

Tiempo::~Tiempo()
{
    cout<< "Se ha destruido el objeto"<<endl;
    --contador;
}
