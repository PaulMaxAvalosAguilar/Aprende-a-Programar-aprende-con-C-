#ifndef CLASEPRUEBA_H
#define CLASEPRUEBA_H

#include <string>

class Claseprueba
{
public:
    Claseprueba(std::string nombre);
    Claseprueba(Claseprueba &prueba);
    ~Claseprueba();

    int getNumero() const;
    void setNumero(int value);

    std::string &getNombre();
    void setNombre(const std::string &value);

private:
    static int elementos_activos;
    int numero;
    std::string nombre;
};

#endif // CLASEPRUEBA_H
