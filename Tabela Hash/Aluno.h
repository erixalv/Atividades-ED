#ifndef ALUNO_H
#define ALUNO_H

#pragma once

#include <string>

using namespace std;

class Aluno
{
public:
    Aluno(string n, float nota);
    string getNome();
    void setNome(string na);
    float getNota();
    void setNota(float no);
    int getHash();

private:
    string nome;
    float nota;
};

#endif