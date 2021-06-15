//
// Created by norma on 15/6/2021.
//

#include "Lista.h"

Lista::Lista() {
    raiz = new Nodo();
    cola= new Nodo();
}

Lista::~Lista() {
    Nodo* temp = raiz->getNext();
    while (temp != nullptr){
        raiz->setNext(temp->getNext());
        delete temp;
        temp = raiz->getNext();
    }
}

void Lista::agregarAlInicio(int valor) {
    Nodo* temp = raiz->getNext();
    Nodo* nuevo = new Nodo(valor);
    nuevo->setPrev(nullptr);
    nuevo->setNext(raiz->getNext());
    raiz->setNext(nuevo);
    if (cola->getPrev() == nullptr){
        cola->setPrev(nuevo);
    }
    if (temp!= nullptr){
        temp->setPrev(nuevo);
    }
}

string Lista::toString() {
    Nodo* temp = raiz->getNext();
    stringstream ss;
    if (temp == nullptr){
        ss<<"Lista Vacia"<<endl;
    } else{
        ss<<"NULL<-->";
        do {
            ss<<temp->getInfo();
            ss<<"<-->";
            temp = temp->getNext();
        } while(temp != nullptr);
            ss<<"NULL"<<endl;
    }
    return ss.str();
}

void Lista::agregarAlFinal(int valor) {
    Nodo* temp = cola->getPrev();
    Nodo* nuevo = new Nodo(valor);
    nuevo->setNext(nullptr);
    nuevo->setPrev(cola->getPrev());
    cola->setPrev(nuevo);
    if (temp != nullptr){
        temp->setNext(nuevo);
    }
    if (raiz->getNext() == nullptr){
        raiz->setNext(nuevo);
    }


}

void Lista::reversa() {


}

Nodo *Lista::buscarElelemto(int valor) {//tambien jla pa listas siumples
    Nodo* temp = raiz->getNext();
    while (temp != nullptr){
        if (temp->getInfo()== valor){
            return temp;
        }
        temp = temp->getNext();
    }
    return temp;
}

string Lista::borrarEspecifico(int valor) {
    Nodo* temp = buscarElelemto(valor);
    if(temp == nullptr){
        return "valor no encontrado";
    }
    if(raiz->getNext() == temp){
        raiz->setNext(temp->getNext());
        delete temp;
        temp = raiz->getPrev();
        temp->setPrev(nullptr);
        return "numero borrado";
    }
    if (cola->getPrev()== temp){
        cola->setPrev(temp->getPrev());
        delete temp;
        temp = cola->getPrev();
        temp->setNext(nullptr);
        return "valor eliminado";
    }
    Nodo* anterior, * siguiente;
    anterior = temp->getPrev();
    siguiente = temp->getNext();
    if (anterior!= nullptr){
        anterior->setNext(temp->getNext());
    }
    if (siguiente != nullptr){
        siguiente->setPrev(temp->getPrev());
    }
    delete temp;
    return "elemento borrado";
}


