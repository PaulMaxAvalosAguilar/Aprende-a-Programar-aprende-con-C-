#ifndef NODO_H
#define NODO_H

#include <memory>

template<typename T>
class Nodo
{
public:
    explicit Nodo(std::shared_ptr<T> dato)
        :dato(dato),
          siguienteptr(nullptr)
    {

    }

    std::shared_ptr<T> *getDato(){
        return &dato;
    }

    void setDato(std::shared_ptr<T> *dato){
        this->dato = *dato;
    }

    std::shared_ptr<Nodo<T>> *getSiguienteptr(){
        return &siguienteptr;
    }

    void setSiguienteptr(std::shared_ptr<Nodo<T>> *ptr ){
        siguienteptr = *ptr;
    }

private:
    std::shared_ptr<T> dato;
    std::shared_ptr<Nodo<T>> siguienteptr;

};

#endif // NODO_H
