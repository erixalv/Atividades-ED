#include "PilhaLink.h"

PilhaLink::PilhaLink()
{
    topo = nullptr;
    nElementos = 0;
}

PilhaLink::~PilhaLink()
{

}

bool PilhaLink::isEmpty() {
    if (nElementos == 0) {
        return true;
    }
    return false;
}

int PilhaLink::size() {
    return nElementos;
}

int PilhaLink::top() {
    if (PilhaLink::isEmpty()) {
        return -1;
    }

    return topo->getDado();
}

void PilhaLink::push(int d) {
    No* aux = new No();

    aux->setDado(d);
    aux->setProx(topo);

    topo = aux;
    nElementos++;
}

void PilhaLink::pop() {
    if (PilhaLink::isEmpty()) {
        return;
    }
    No* aux = new No();
    aux = topo;
    topo = aux->getProx();
    nElementos--;

    delete aux;
}