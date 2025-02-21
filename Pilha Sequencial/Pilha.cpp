#include "Pilha.h"

Pilha::Pilha()
{
    tamMax = 100;
    dados = new int[tamMax];
    topo = -1;
}

bool Pilha::isEmpty() {
    if (topo == 1) {
        return true;
    }
    return false;    
}

bool Pilha::isFull() {
    if (topo == (tamMax - 1)) {
        return true;
    }
    return false;
}

int Pilha::getSize() {
    return topo+1;
}

int Pilha::top() {
    if (Pilha::isEmpty) {
        return -1;
    }
    return dados[topo];
}

void Pilha::push(int value) {
    if(Pilha::isFull()) {
        return;
    }
    topo++;
    dados[topo] = value;
}

void Pilha::pop() {
    if (Pilha::isEmpty()) {
        return;
    }
    topo--;
}