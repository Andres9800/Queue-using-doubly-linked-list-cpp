#ifndef LISTA_SIMPLE_TEMPLATES_NODO_H
#define LISTA_SIMPLE_TEMPLATES_NODO_H

#include <iostream>
#include <sstream>
using namespace std;

template<class tipo>

class Nodo {
private:
    tipo *dato;
    Nodo *siguiente;
    Nodo *anterior;
public:
    Nodo();
    virtual ~Nodo();
    tipo *getDato() const;
    void setDato(tipo *dato);
    Nodo *getSiguiente() const;
    void setSiguiente(Nodo *siguiente);
    Nodo *getAnterior() const;
    void setAnterior(Nodo *anterior);
};

template<class tipo>
Nodo<tipo>::Nodo(){}

template<class tipo>
Nodo<tipo>::~Nodo() {}

template<class tipo>
tipo *Nodo<tipo>::getDato() const {
    return dato;
}

template<class tipo>
void Nodo<tipo>::setDato(tipo *dato) {
    Nodo::dato = dato;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getSiguiente() const {
    return siguiente;
}

template<class tipo>
void Nodo<tipo>::setSiguiente(Nodo *siguiente) {
    Nodo::siguiente = siguiente;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getAnterior() const {
    return anterior;
}

template<class tipo>
void Nodo<tipo>::setAnterior(Nodo *anterior) {
    Nodo::anterior = anterior;
}

#endif //LISTA_SIMPLE_TEMPLATES_NODO_H