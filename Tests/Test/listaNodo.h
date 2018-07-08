#ifndef LISTANODO_H
#define LISTANODO_H

#include <memory>

template <typename nodetype>
class ListaNodo
{
public:
    explicit ListaNodo(std::shared_ptr<nodetype> dato)
        : dato(dato), siguienteptr(nullptr)
    {

    }


    std::shared_ptr<nodetype> *getDato(){
        return &dato;
    }

    void setDato(std::shared_ptr<nodetype> *dato){
        this->dato.reset();
        this->dato = *dato;
    }

    std::shared_ptr<ListaNodo<nodetype>> *getsiguienteptr(){
        return &siguienteptr;
    }

    void setsiguienteptr(std::shared_ptr<ListaNodo<nodetype>> *ptr){
        this->siguienteptr.reset();
        this->siguienteptr = *ptr;
    }

private:
    std::shared_ptr<nodetype> dato;
    std::shared_ptr<ListaNodo<nodetype>> siguienteptr;
};

#endif // LISTA_H
