#ifndef LISTA_H
#define LISTA_H

#include "Punteros/nodo.h"
#include <memory>
#include <iostream>

template <typename T>
class Lista
{
public:
    Lista()
        :primerNodo(nullptr),
          ultimoNodo(nullptr),
          tamanio(0){

    }

    ~Lista(){
        std::cout<<std::endl<<"Destruyendo Lista"<<std::endl;
    }

    void insertarEnFrente(T valor){
         std::shared_ptr<Nodo<T>> nuevoptr(getNuevoNodo(valor));
         if(estaVacia()){
             primerNodo = ultimoNodo = nuevoptr;
         }else{
             nuevoptr->setSiguienteptr(&primerNodo);
             primerNodo = nuevoptr;
         }

         tamanio++;
    }

    void insertarAtras(T valor){
        std::shared_ptr<Nodo<T>> nuevoptr(getNuevoNodo(valor));
        if(estaVacia()){
            primerNodo = ultimoNodo = nuevoptr;
        }else{
            ultimoNodo->setSiguienteptr(&nuevoptr);
            ultimoNodo = nuevoptr;
        }

        tamanio++;
    }

    bool removerFrente(){
        if(estaVacia()){
            return false;
        }else{
            std::shared_ptr<Nodo<T>> nodotemporal = primerNodo;
            if(primerNodo.get() == ultimoNodo.get()){
                primerNodo = ultimoNodo = nullptr;
            }else{
                primerNodo = *(primerNodo->getSiguienteptr());
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
            std::shared_ptr<Nodo<T>> nodotemporal = ultimoNodo;
            if(primerNodo.get() == ultimoNodo.get()){
                primerNodo = ultimoNodo = nullptr;
            }else{
                std::shared_ptr<Nodo<T>> nodoactual  = primerNodo;
                while(nodoactual->getSiguienteptr()->get() != ultimoNodo.get()){
                    nodoactual = (*nodoactual->getSiguienteptr());
                }

                ultimoNodo = nodoactual;
                nodoactual->getSiguienteptr()->reset();
            }

            nodotemporal.reset();
            tamanio--;
            return true;

        }
    }

    bool estaVacia(){
        return primerNodo.get() ==nullptr;
    }

    int &getTamanio(){
        return tamanio;
    }

    void setTamanio(int value){
        tamanio = value;
    }

    std::shared_ptr<Nodo<T>> *getprimerNodo(){
        return &primerNodo;
    }


private:
    std::shared_ptr<Nodo<T>> primerNodo;
    std::shared_ptr<Nodo<T>> ultimoNodo;
    int tamanio;

    std::unique_ptr<Nodo<T>> getNuevoNodo(T valor){
        std::shared_ptr<T> elemento(new T(valor));
        std::unique_ptr<Nodo<T>> nuevoNodo(new Nodo<T>(elemento));
        return nuevoNodo;
    }
};

#endif // LISTA_H
