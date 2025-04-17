#include "Aluno.h"

Aluno::Aluno(string nome, float n) : nome(nome), nota(n)
{
    this-> nome = nome;
    nota = n;
}

string Aluno::getNome() {
    return nome;
}

void Aluno::setNome(string na) {
    nome = na;
}

float Aluno::getNota() {
    return nota;
}

void Aluno::setNota(float no) {
    nota = no;
}

int Aluno::getHash() {
    int hashcode = 0;
    for(char c: nome) {
        hashcode += static_cast<int>(c);
    }
    return hashcode;
}