#include "No.h"

No::No()
{
    next = nullptr;
}

No::~No()
{

}

int No::getDado() {
    return dado;
}

void No::setDado(int d) {
    dado = d;
}

No* No::getNext() {
    return next;
}

void No::setNext(No* n) {
    next = n;
}