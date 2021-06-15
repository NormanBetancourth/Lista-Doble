//
// Created by norma on 15/6/2021.
//

#ifndef LISTADOBLE_NODO_H
#define LISTADOBLE_NODO_H
#include <iostream>
#include <sstream>

using namespace std;
class Nodo {
private:
    int info;
    Nodo* next;
    Nodo* prev;
public:
    Nodo(int info = 0);

    virtual ~Nodo();

    int getInfo() const;

    Nodo *getNext() const;

    Nodo *getPrev() const;

    void setInfo(int info);

    void setNext(Nodo *next);

    void setPrev(Nodo *prev);
};


#endif //LISTADOBLE_NODO_H
