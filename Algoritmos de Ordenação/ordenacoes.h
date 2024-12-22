#ifndef ORDENACOES_H
#define ORDENACOES_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <chrono>


using namespace std;

void InsertionSort(vector<int>& v) {
    int n = v.size();
    int pivot;

    for (int i = 1; i < n; i++) {
        pivot = v[i];
        int j = i-1;
        while (j >= 0 and v[j] > pivot){
            v[j+1] = v[j];
            j = j-1;
        }
        v[j+1] = pivot;
    }
}

void SelectionSort(vector<int>& v) {
    int n = v.size();

    for (int i = 0; i < n-1; i++) {
        int i_min = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[i_min]) {
                i_min = j;
            }
        }
        if (v[i] != v[i_min]) {
            int temp = v[i];
            v[i] = v[i_min];
            v[i_min] = temp;
        }
    }
    
}

float arqSort(string arq_in_name, string arq_out_name, int op) {
    

    fstream arq;
    fstream listaUmOrd;

    arq.open(arq_in_name, ios::in);
    listaUmOrd.open(arq_out_name, ios::out);

    if (!arq.is_open()) {
        cerr << "Erro ao abrir o arquivo de entrada: " << arq_in_name << endl;
        return -1;
    }
    if (!listaUmOrd.is_open()) {
        cerr << "Erro ao abrir o arquivo de saída: " << arq_out_name << endl;
        return -1;
    }

    vector<int> v_aux;

    string line;
    while (getline(arq, line)) {
        v_aux.push_back(stoll(line));
    }

    auto start = chrono::high_resolution_clock::now();
    if (op == 1) {
        InsertionSort(v_aux);
    }
    if (op == 2) {
        SelectionSort(v_aux);
    }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<float> duration = chrono::duration_cast<chrono::duration<float>>(end - start);

    int size = v_aux.size();

    for (int i = 0; i < size; i++) {
        listaUmOrd << v_aux[i] << endl;
    }

    arq.close();
    listaUmOrd.close();

    return duration.count();
}

#endif