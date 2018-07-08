#ifndef STACK_H
#define STACK_H

#include <deque>

template <typename T, typename X, class Container = std::deque<X> >
class Stack
{
public:
    T& top(){
        return pila.front();
    }
    void push(const T &empuja){
        pila.push_front(empuja);
    }
    void pop(){
        pila.pop_front();
    }
    bool isEmpty()const{
        return pila.empty();
    }
    int size() const{
        return pila.size();
    }

private:
    Container pila;
};

#endif // STACK_H
