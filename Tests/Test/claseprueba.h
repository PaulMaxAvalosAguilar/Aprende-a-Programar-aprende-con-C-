#ifndef CLASEPRUEBA_H
#define CLASEPRUEBA_H

#include <string>

class Claseprueba
{
public:
    Claseprueba(std::string numero);
    Claseprueba(Claseprueba &prueba);
    ~Claseprueba();

    int getNumero() const;
    void setNumero(int value);

    std::string getNombre() const;
    void setNombre(const std::string &value);

private:
    static int activos;
    int numero;
    std::string nombre;
};

#endif // CLASEPRUEBA_H
