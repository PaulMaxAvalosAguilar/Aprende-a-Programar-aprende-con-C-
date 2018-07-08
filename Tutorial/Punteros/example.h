#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <string>
#include "Punteros/claseprueba.h"
#include <memory>

class Example
{
public:
    Example();

    std::unique_ptr<Claseprueba> getA();
    void setA(std::unique_ptr<Claseprueba> value);

    void printAgain();



private:
    std::unique_ptr<Claseprueba> a;
};

#endif // EXAMPLE_H
