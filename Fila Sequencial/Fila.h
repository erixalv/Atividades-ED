#ifndef FILA_H
#define FILA_H

#pragma once

class Fila
{
public:
    Fila();
    bool isEmpty();
    bool isFull();
    int size();
    int first();
    bool insert(int v);
    void remove();
    void show();

private:
    int* dados;
    int inicio;
    int fim;
    int nElements;
    int sizeMax;
};

#endif