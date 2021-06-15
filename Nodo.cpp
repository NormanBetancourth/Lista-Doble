//
// Created by norma on 15/6/2021.
//

#include "Nodo.h"

Nodo::Nodo(int info) : info(info), next(nullptr), prev(nullptr) {}

Nodo::~Nodo() {
}

int Nodo::getInfo() const {
    return info;
}

Nodo *Nodo::getNext() const {
    return next;
}

Nodo *Nodo::getPrev() const {
    return prev;
}

void Nodo::setInfo(int info) {
    Nodo::info = info;
}

void Nodo::setNext(Nodo *next) {
    Nodo::next = next;
}

void Nodo::setPrev(Nodo *prev) {
    Nodo::prev = prev;
}
