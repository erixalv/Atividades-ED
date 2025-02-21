#ifndef PILHA_H
#define PILHA_H

#pragma once

class Pilha
{
public:
    Pilha();
    bool isEmpty();
    bool isFull();
    int getSize();
    int top();
    void push(int value);
    void pop();

private:
    int *dados;
    int topo;
    int tamMax;
};

#endif