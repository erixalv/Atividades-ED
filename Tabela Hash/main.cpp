// main.cpp
#include "HashTable.h"
#include "Aluno.h"
#include <iostream>

int main() {
    HashTable tabela(10);

    // Criando alguns alunos
    Aluno* a1 = new Aluno("Alice", 9.5);
    Aluno* a2 = new Aluno("Bob", 7.8);
    Aluno* a3 = new Aluno("Carlos", 8.2);
    Aluno* a4 = new Aluno("Diana", 6.7);
    Aluno* a5 = new Aluno("Eduardo", 9.1);
    Aluno* a6 = new Aluno("Bruna", 8.3);
    Aluno* a7 = new Aluno("Jose", 9);
    Aluno* a8 = new Aluno("Artur", 8.5);
    Aluno* a9 = new Aluno("Layssa", 9.2);
    Aluno* a10 = new Aluno("Lucas", 7.8);

    // Inserindo na tabela
    tabela.insert(a1);
    tabela.insert(a2);
    tabela.insert(a3);
    tabela.insert(a4);
    tabela.insert(a5);
    tabela.insert(a6);
    tabela.insert(a7);
    tabela.insert(a8);
    tabela.insert(a9);
    tabela.insert(a10);

    // Imprimindo a tabela
    std::cout << "Tabela Hash:\n";
    tabela.printTabela();

    // Buscando um aluno
    std::string nomeBusca = "Carlos";
    Aluno* encontrado = tabela.buscar(nomeBusca);
    if (encontrado != nullptr) {
        std::cout << "\nAluno encontrado: " << encontrado->getNome()
                  << " com nota " << encontrado->getNota() << "\n";
    } else {
        std::cout << "\nAluno " << nomeBusca << " não encontrado.\n";
    }

    // Limpando memória
    delete a1;
    delete a2;
    delete a3;
    delete a4;
    delete a5;
    delete a6;
    delete a7;
    delete a8;
    delete a9;
    delete a10;


    return 0;
}
