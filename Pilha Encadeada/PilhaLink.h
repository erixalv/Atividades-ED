#ifndef PILHALINK_H
#define PILHALINK_H

#pragma once

#include "No.h"

class PilhaLink
{
public:
    PilhaLink();
    ~PilhaLink();
    bool isEmpty();
    int size();
    int top();
    void push(int d);
    void pop();

private:
    No* topo;
    int nElementos;
};

#endif