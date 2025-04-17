#include "HashTable.h"
#include <iostream>

using namespace std;

// Construtor
HashTable::HashTable(int n) {
    tableSize2 = n / tableSize1;
    tabela.resize(tableSize1);

    for (int i = 0; i < tableSize1; ++i) {
        tabela[i] = new vector<list<Aluno*>>(tableSize2);
    }
}

// Hash do primeiro nível
int HashTable::hash1(string chave) {
    int soma = 0;
    for (char c : chave)
        soma += c;
    return soma % tableSize1;
}

// Hash do segundo nível
int HashTable::hash2(string chave) {
    int hash = 1;
    for (char c : chave) {
        hash *= c;
        hash %= tableSize2;
    }
    return hash;
}

void HashTable::insert(Aluno* al) {
    string chave = al->getNome();
    int i = hash1(chave);
    int j = hash2(chave);

    tabela[i]->at(j).push_back(al);
}

Aluno* HashTable::buscar(string nome) {
    int i = hash1(nome);
    int j = hash2(nome);

    for (Aluno* al : tabela[i]->at(j)) {
        if (al->getNome() == nome)
            return al;
    }

    return nullptr;
}

void HashTable::printTabela() {
    for (int i = 0; i < tableSize1; ++i) {
        cout << "Nivel 1 [" << i << "]\n";
        for (int j = 0; j < tableSize2; ++j) {
            cout << "  Nivel 2 [" << j << "]: ";
            for (Aluno* al : tabela[i]->at(j)) {
                cout << "[" << al->getNome() << ", " << al->getNota() << "] -> ";
            }
            cout << "NULL\n";
        }
    }
}
