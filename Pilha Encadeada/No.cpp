#include "No.h"

No::No()
{
    prox = nullptr;
}

int No::getDado() {
    return dado;
}

void No::setDado(int d) {
    dado = d;
}

No* No::getProx() {
    return prox;
}

void No::setProx(No* n) {
    prox = n;
}