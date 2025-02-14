#include <iostream>
#include "No.h"
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList* lista = new LinkedList();

    int act = 0, pos = 0, el = 0;

    while (act != 8) {
        cout << "Acao: \n1 - Inserir elemento \n2 - Verificar se esta vazia \n";
        cout << "3 - Obter o tamanho \n4 - Modificar o valor de uma posicao \n5 - Obter o valor de uma posicao\n";
        cout << "6 - Remover elemento \n7 - Mostrar a Lista \n8 - Sair\n";
        cin >> act;

        switch(act) {
            case 1:
                pos = 0;
                el = 0;

                cout << "Insira a posicao do elemento na lista: ";
                cin >> pos;
                cout << "Insira o valor do elemento: ";
                cin >> el;
                lista->insere(pos, el);
                break;
            case 2:
                if (lista->isEmpty()) {
                    cout << "A lista esta vazia" << endl;
                }
                else {
                    cout << "A lista nao esta vazia" << endl;
                }
                break;
            case 3:
                cout << "A lista tem tamanho " << lista->getSize() << endl;
                break;
            case 4:
                pos = 0;
                cout << "Insira a posicao: " << endl;
                cin >> pos;
                cout << "Insira o novo valor: " << endl;
                cin >> el;
                lista->mudaElemento(pos, el);
                break;
            case 5:
                pos = 0;
                cout << "Insira a posicao: " << endl;
                cin >> pos;
                cout << lista->getElemento(pos) << endl;
                break;
            case 6:
                pos = 0;
                cout << "Insira a posicao do elemento a ser removido: " << endl;
                cin >> pos;
                lista->remove(pos);
                break;
            case 7:
                lista->mostraLista();
                break;
            case 8:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Insira uma opcao valida." << endl;
                break;
        }
    }

    delete lista;
    
}