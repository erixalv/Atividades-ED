#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
    size = 0;
}

bool LinkedList::isEmpty() {
    if (size == 0) {
        return 1;
    }
    return 0;    
}

int LinkedList::getSize() {
    return size;
}

int LinkedList::getElemento(int pos) {
    No* aux = head;
    int cont = 1;
    
    if (size == 0 || (pos < 1) || (pos > size)) {
        return -1;
    }
    
    while(cont < pos) {
        aux = aux->getNext();
        cont++;
    }
    return aux->getDado();
}

bool LinkedList::mudaElemento(int pos, int dado) {
    No* aux = head;
    int cont = 1;

    if(size == 0 || pos < 1 || pos > size) {
        return -1;
    }
    while (cont < pos) {
        aux = aux->getNext();
        cont++;
    }
    aux->setDado(dado);
    return 1;
}

bool LinkedList::insereInicio(int dado) {
    No* novoNo = new No();
    novoNo->setDado(dado);
    novoNo->setNext(head);
    head = novoNo;
    size++;
    return true;
}

bool LinkedList::insereFim(int dado) {
    No* novoNo = new No();
    novoNo->setDado(dado);

    No* aux = head;
    while (aux->getNext() != nullptr) {
        aux = aux->getNext();
    }

    novoNo->setNext(nullptr);
    aux->setNext(novoNo);
    size++;
    return true;
}

bool LinkedList::insereMeio(int pos, int dado) {
    No* novoNo = new No();
    No* aux = head;
    int cont = 1;

    novoNo->setDado(dado);

    while (cont < pos - 1) {
        aux = aux->getNext();
        cont++;
    }     

    novoNo->setNext(aux->getNext());
    aux->setNext(novoNo);
    size++;
    return 1;
}

void LinkedList::removeInicio() {
    No* aux = head;

    head = aux->getNext();
    size--;

    delete aux;
}

void LinkedList::removeMeio(int pos) {
    No* atual = nullptr;
    No* antecessor = nullptr;
    int cont = 1;

    atual = head;
    while(cont < pos && atual != nullptr) {
        antecessor = atual;
        atual = atual->getNext();
        cont++;
    }

    if(atual == nullptr) {
        return;
    }

    antecessor->setNext(atual->getNext());
    size--;

    delete atual;
}

void LinkedList::remove(int pos) {
    if(pos < 1 || pos > size) {
        return;
    }

    if (pos == 1) {
        LinkedList::removeInicio();
    }
    else {
        LinkedList::removeMeio(pos);
    }
}

bool LinkedList::insere(int pos, int dado) {
    if (pos < 1 || pos > size + 1) {
        return false;
    }

    if (pos == 1) {
        return insereInicio(dado);
    }
    else if (pos == size + 1) {
        return insereFim(dado);
    }
    else {
        return insereMeio(pos, dado);
    }
}

void LinkedList::mostraLista() {
    No* aux = head;

    while(aux != nullptr) {
        cout << aux->getDado();
        if (aux->getNext() != nullptr) {
            cout << "  -->  ";
        }
        aux = aux->getNext();
    }
    cout << endl;
}