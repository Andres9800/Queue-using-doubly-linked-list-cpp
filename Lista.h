
#ifndef COLA_LISTA_DOBLE_GENERICA_LISTA_H
#define COLA_LISTA_DOBLE_GENERICA_LISTA_H

#include "Nodo.h"

template<class E>
class Lista {
private:
    Nodo<E> *inicio;
    Nodo<E> *cola;
public:
    Lista();
    bool vacia();
    E* valorInicio();
    E* valorFinal();

    void agregar(Nodo<E> *referencia , E* valor);
    void agregarInicio(E* valor); // no se usa
    void agregarFinal(E* valor);

    void borrar(Nodo<E> *referencia);

    void borrarInicio();
    void borrarFinal(); // no se usa
    string toString(); // no se usa

};

template <class E>
Lista<E>::Lista() {
    this->inicio = new Nodo<E>;
    this->cola = new Nodo<E>;
    inicio->setSiguiente(cola);
    cola->setAnterior(inicio);
}

template <class E>
bool Lista<E>::vacia() {
    return (inicio->getSiguiente()==cola);
}

template <class E>
E* Lista<E>::valorInicio() {
    Nodo<E> *temp = inicio->getSiguiente();
    if (temp == nullptr){
        return nullptr;
    }
    return temp->getDato();
}

template <class E>
E* Lista<E>::valorFinal() {

    Nodo<E> *temp = cola->getSiguiente();
    if (temp == nullptr){
        return nullptr;
    }
    return temp->getDato();
}
template <class E>
void Lista<E>::agregar(Nodo<E> *referencia, E *valor) {
    Nodo<E> * nuevo = new Nodo<E>();
    nuevo->setDato(valor);
    nuevo->setSiguiente(referencia);
    nuevo->setAnterior(referencia->getAnterior());
    referencia->getAnterior()->setSiguiente(nuevo);
    referencia->setAnterior(nuevo);
}
template <class E>
void Lista<E>::agregarInicio(E *valor) {
    agregar(inicio->getSiguiente(),valor);
}
template <class E>
void Lista<E>::agregarFinal(E *valor) {
    agregar(cola,valor);
}
template <class E>
void Lista<E>::borrar(Nodo<E> *referencia) {
    Nodo<E> *ant = referencia->getAnterior();
    Nodo<E> *sig = referencia->getSiguiente();
    ant->setSiguiente(sig);
    sig->setAnterior(ant);
    delete referencia;
}

template <class E>
void Lista<E>::borrarInicio() {
    borrar(inicio->getSiguiente());
}

template <class E>
void Lista<E>::borrarFinal() {
    borrar(cola->getAnterior());
}
/*template <class E>
string Lista<E>::toString() {
    stringstream ss;
    Nodo<E> *temp = inicio->getSiguiente();
    if (temp==cola){
        ss<<"Lista Vacia!"<<endl;
    } else{
        ss<<"Null<->";
        while (temp!= cola){
            ss<<*temp->getDato()<<"<->";
            temp = temp->getSiguiente();
        }
        ss<<"Null"<<endl;
    }
    return ss.str();
}*/
template <class E>
string Lista<E>::toString() {
    stringstream ss;
    Nodo<E> *temp = inicio->getSiguiente();
    if (temp==cola){
        ss<<"Cola Vacia!"<<endl;
    } else{
        //ss<<"Null<->";
        while (temp!= cola){
            ss<<*temp->getDato()<<endl;
            temp = temp->getSiguiente();
        }
        ss<<"---------"<<endl;
    }
    return ss.str();
}

#endif //COLA_LISTA_DOBLE_GENERICA_LISTA_H
