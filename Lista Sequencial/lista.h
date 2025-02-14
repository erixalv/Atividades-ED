#ifndef LISTA_H
#define LISTA_H

using namespace std;

class Lista {
    private:
        int* dados;
        int tamAtual;
        int tamMax;
    public:
        Lista();
        ~Lista();
        bool isEmpty() {
            if (tamAtual == 0) {
                return true;
            }
            return false;
        }
        bool isFull() {
            if(tamAtual == tamMax) {
                return true;
            }
            return false;
        }
        int getSize() {
            return tamAtual;
        }
        int getElement(int pos) {
            if((pos > tamAtual) || (pos <= 0)) {
                return -1;
            }

            return dados[pos-1];
        }
        int getPosition(int dado) {
            for (int i = 0; i < tamAtual; i++) {
                if (dados[i] == dado) {
                    return i+1;
                }
            }
            return -1;
        }
        bool insert(int pos, int dado) {
            if(isFull() || (pos > tamAtual+1) || (pos <= 0)) {
                return false;
            }

            for (int i = tamAtual; i >= pos; i++) {
                dados[i] = dados[i-1];
            }
            dados[pos-1] = dado;
            tamAtual++;
            return true;
        }

        bool change_element(int pos, int value) {
            if(isFull() || (pos > tamAtual) || (pos <= 0)) {
                return false;
            }

            dados[pos-1] = value;
            return true;
        }

        bool remove(int pos) {

            if((pos > tamAtual) || (pos < 1)) {
                return false;
            }

            for (int i = pos-1; i <= tamAtual-1; i++) {
                dados[i] = dados[i+1];
            }
            tamAtual--;
            return true;
        }

        bool show_list() {
            if(tamAtual == 0) {
                return 0;
            }

            for (int i = 0; i < tamAtual; i++) {
                if (i != tamAtual - 1) {
                    cout << dados[i] << " - ";
                }
                else {
                    cout << dados[i] << endl;
                }
            }
            return 1;
        }
};

Lista::Lista() {
    tamAtual = 0;
    tamMax = 100;
    dados = new int[tamMax];
}

Lista::~Lista() {
    delete[] dados;
}

#endif