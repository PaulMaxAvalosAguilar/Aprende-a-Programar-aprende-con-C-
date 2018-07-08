#include "array.h"
#include <stdexcept>

using namespace std;

ostream &operator<<(ostream & output, const Array &ar)
{
    for(size_t i  = 0; i <ar.size; ++i){
        output<< ar.ptr[i];

        if((i+1) %4 == 0){
            output <<endl;
        }
    }

    return output;
}

istream &operator>>(istream &input, Array &ar)
{
    for(size_t i = 0; i<ar.size; ++i){
        input >> ar.ptr[i];
    }
    return input;
}

Array::Array(int arrayTAMANIO):
    size(arrayTAMANIO > 0 ? arrayTAMANIO: throw  invalid_argument("El tamño debe ser mayor que 0")),
    ptr(new int[size])
{
    for(size_t i = 0; i<size; ++i){
        ptr[i] = 0;
    }
}

Array::Array(const Array &arrayCopia)
    :size(arrayCopia.size),
      ptr(new int[size])
{
    for(size_t i = 0; i<size; ++i){
        ptr[i] = arrayCopia.ptr[i];
    }
}

Array::~Array()
{
    delete [] ptr;
}

size_t Array::getTamanio() const
{
    return size;
}

const Array &Array::operator=(const Array &arrayDerecha)
{
     if(&arrayDerecha != this)

         if(size != arrayDerecha.size){
             delete [] ptr;
             size = arrayDerecha.size;
             ptr = new int[size];
         }

     for(size_t i = 0; i<size; ++i){
         ptr[i] = arrayDerecha.ptr[i];
     }

     return *this;
}

bool Array::operator==(const Array &arrayDerecha) const
{
    if(size != arrayDerecha.size){
        return false;
    }

    for(size_t i = 0; i<size; ++i){
        if(ptr[i] != arrayDerecha.ptr[i]){
            return false;
        }
    }


    return true;
}

bool Array::operator!=(const Array &arrayDerecha) const
{
    return !( *this == arrayDerecha);
}

int &Array::operator[](int posicion)
{
    if(posicion <0 || posicion >= size){
        throw out_of_range("La posicion esta fuera del tamaño del objeto array");
    }
    return ptr[posicion];
}

int Array::operator[](int posicion) const
{
    if(posicion <0 || posicion >= size){
        throw out_of_range("La posicion esta fuera del tamaño del objeto array");
    }
    return ptr[posicion];
}





