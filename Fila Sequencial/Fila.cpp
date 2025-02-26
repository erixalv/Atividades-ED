#include "Fila.h"
#include <iostream>

Fila::Fila() {
    inicio = fim = nElements = 0;
    sizeMax = 100;
    dados = new int[sizeMax];
}

bool Fila::isEmpty() {
    if (nElements == 0) {
        return true;
    }
    return false;
}

bool Fila::isFull() {
    if (nElements == sizeMax) {
        return true;
    }
    return false;
}

int Fila::size() {
    return nElements;
}

int Fila::first() {
    if(Fila::isEmpty()) {
        return -1;
    }
    return dados[inicio];
}

bool Fila::insert(int v) {
    if (Fila::isEmpty()) {
        return false;
    }
    
    fim = (fim + 1) % sizeMax;
    dados[fim] = v;

    nElements++;
    return true;
}

void Fila::remove() {
    if (Fila::isEmpty()) {
        return;
    }

    inicio = (inicio + 1) % sizeMax;
    nElements--;
}

void Fila::show() {
    for (int i = 0; i < sizeMax; i++) {
        if(i != (sizeMax - 1)) {
            printf("%d - ", dados[i]);
        }
        else {
            printf(" %d", dados[i]);
        }
    }
    
}