#include "Fila.h"
#include <iostream>

using namespace std;

Fila::Fila() {
    inicio = nElements = 0;
    fim = -1;
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
    if (Fila::isEmpty()) {
        return -1;
    }
    return dados[inicio];
}

int Fila::last() {
    if (Fila::isEmpty()) {
        return -1;
    }
    return dados[fim];
}

bool Fila::insert(int v) {
    if (Fila::isFull()) {
        return false;
    }
    
    fim = (fim + 1) % sizeMax;
    dados[fim] = v;

    nElements++;
    cout << "Elemento inserido." << endl;
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
    cout << "Lista: " << endl;
    for (int i = inicio; i < fim; i++) {
        if(i != (fim - 1)) {
            cout << dados[i] << " - ";
        }
        else {
            cout << dados[i] << endl;
        }
    }
    
}