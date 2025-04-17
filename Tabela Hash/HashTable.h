#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "Aluno.h"
#include <vector>
#include <list>
#include <string>

using namespace std;

class HashTable
{
public:
    HashTable(int n); // novo construtor com tamanho total de alunos
    void insert(Aluno* al);
    Aluno* buscar(string nome);
    void printTabela();

private:
    int tableSize1 = 10; // tamanho do primeiro nível
    int tableSize2;      // tamanho de cada subvetor
    vector<vector<list<Aluno*>>*> tabela; // nível 1: vetor de ponteiros para vetores de listas

    int hash1(string chave);
    int hash2(string chave);
};

#endif
