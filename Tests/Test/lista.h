#ifndef LISTA_H
#define LISTA_H

#include "listaNodo.h"
#include <memory>
#include <iostream>

template <typename T>
class Lista
{
public:
    Lista()
        :primerNodo(nullptr),
          ultimoNodo(nullptr),
          tamanio(0)
    {

    }

    ~Lista(){
        std::cout<<std::endl<<"Destroying nodes"<<std::endl;
    }

    void insertaEnFrente(T *valor){
        std::shared_ptr<ListaNodo<T>> nuevoptr(getNuevoNodo(valor));
        if(estaVacia()){
            primerNodo = ultimoNodo = nuevoptr;
        }else{
            nuevoptr->setsiguienteptr(&primerNodo);
            primerNodo = nuevoptr;
        }

        tamanio++;
    }

    void insertaAtras(T *valor){
        std::shared_ptr<ListaNodo<T>> nuevoptr(getNuevoNodo(valor));
        if(estaVacia()){
            primerNodo = ultimoNodo = nuevoptr;
        }else{
            ultimoNodo->setsiguienteptr(&nuevoptr);
            ultimoNodo =nuevoptr;
        }
        tamanio++;
    }

    bool removerFrente(){

        if(estaVacia()){
            return false;
        }else{
            std::shared_ptr<ListaNodo<T>> nodotemporal = primerNodo;
            if(primerNodo.get() == ultimoNodo.get()){
                primerNodo = ultimoNodo = nullptr;
            }else{
                primerNodo = *(primerNodo->getsiguienteptr());
            }

            nodotemporal.reset();
            tamanio--;

            return true;
        }
    }

    bool removerAtras(){
        if(estaVacia()){
            return false;
        }else{
            std::shared_ptr<ListaNodo<T>> nodotemporal = ultimoNodo;
            if(primerNodo.get() == ultimoNodo.get()){
                primerNodo = ultimoNodo = nullptr;
            }else{
                std::shared_ptr<ListaNodo<T>> nodoactual = primerNodo;

                while(nodoactual->getsiguienteptr()->get() != ultimoNodo.get()){

                    std::cout<<"Iterando en nodo con nombre "<<
                               (*nodoactual->getDato())->getNombre()<<std::endl;
                    nodoactual= (*nodoactual->getsiguienteptr());

                }
                ultimoNodo = nodoactual;
                nodoactual->getsiguienteptr()->reset();
            }

            nodotemporal.reset();
            tamanio--;
            return true;
        }
    }

    bool estaVacia(){
        return primerNodo.get() == nullptr;
    }


    int &getTamanio() {
        return tamanio;
    }
    void setTamanio(int value){
        tamanio = value;
    }

    std::shared_ptr<ListaNodo<T>> *getprimerNodo(){
        return &primerNodo;
    }

private:
    std::shared_ptr<ListaNodo<T>> primerNodo;
    std::shared_ptr<ListaNodo<T>> ultimoNodo;
    int tamanio;

    std::unique_ptr<ListaNodo<T>> getNuevoNodo(T *valor){
        std::shared_ptr<T> elemento(new T(*valor));
        std::unique_ptr<ListaNodo<T>> nuevoNodo(new ListaNodo<T>(elemento));
        return nuevoNodo;
    }


};

#endif // LISTA_H
