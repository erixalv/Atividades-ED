#ifndef NO_H
#define NO_H

#pragma once

class No
{
public:
    No();
    ~No();
    int getDado();
    void setDado(int d);
    No* getNext();
    void setNext(No* n);

private:
    int dado;
    No* next;
};

#endif