#include <iostream>
#include "Fila.h"

using namespace std;

int main() {
    Fila* fila = new Fila();

    int act = -1;

    while (act != 0) {
        cout << "Qual ação deseja realizar? \n[ 1 ] - Inserir elemento na fila \n"
            "[ 2 ] - Verificar se está cheia" 
            "\n[ 3 ] - Verificar se está vazia \n[ 4 ] - Verificar o tamanho \n"
            "[ 5 ] - Verifica o primeiro elemento"
            "\n[ 6 ] - Verifica o último elemento \n[ 7 ] - Remover elemento \n"
            "[ 8 ] - Mostrar a fila \n[ 0 ] - Sair" << endl;
        cin >> act;
        switch(act) {
            case 1:
                int dado;
                cout << "Insira o elemento: ";
                cin >> dado;
                fila->insert(dado);
                break;
            case 2:
                if (fila->isFull()) {
                    cout << "Está cheia" << endl;
                }
                else {
                    cout << "Não está cheia" << endl;
                }
                break;
            case 3:
                if(fila->isEmpty()) {
                    cout << "Está vazia" << endl;
                }
                else {
                    cout << "Não está vazia" << endl;
                }
                break;
            case 4:
                cout << "A fila tem tamanho " << fila->size() << endl;
                break;
            case 5:
                cout << "O primeiro elemento é " << fila->first() << endl;
                break;
            case 6:
                cout << "O último elemento é " << fila->last() << endl;
                break;
            case 7:
                cout << "Elemento " << fila->first() << " removido." << endl;
                fila->remove();
                break;
            case 8:
                fila->show();
                cout << "\n";
                break;
            default:
                break;
        }
    }

    delete fila;
}