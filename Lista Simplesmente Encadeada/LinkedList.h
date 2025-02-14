#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#pragma once

#include "No.h"
#include <iostream>

class LinkedList
{
public:
    LinkedList();

    bool isEmpty();
    int getSize();
    int getElemento(int pos);
    bool mudaElemento(int pos, int dado);
    bool insere(int pos, int dado);

    bool insereInicio(int dado);
    bool insereMeio(int pos, int dado);
    bool insereFim(int dado);

    void remove(int pos);
    void removeInicio();
    void removeMeio(int pos);

    void mostraLista();

private:
    No* head;
    int size;
};

#endif