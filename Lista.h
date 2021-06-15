//
// Created by norma on 15/6/2021.
//

#ifndef LISTADOBLE_LISTA_H
#define LISTADOBLE_LISTA_H
#include "Nodo.h"

class Lista {
private:
    Nodo *raiz;
    Nodo *cola;
public:
    Lista();
    virtual ~Lista();
    void agregarAlInicio(int valor);
    string toString();
    void agregarAlFinal(int valor);

    Nodo* buscarElelemto(int valor);
    //metodo especial
    void reversa();
    string borrarEspecifico(int valor);
};


#endif //LISTADOBLE_LISTA_H
