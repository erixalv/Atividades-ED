#ifndef NO_H
#define NO_H

#pragma once

class No
{
public:
    No();
    int getDado();
    void setDado(int d);
    No* getProx();
    void setProx(No* n);

private:
    int dado;
    No* prox;
};

#endif