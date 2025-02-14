#include <iostream>
#include "lista.h"

using namespace std;

int main() {
    Lista* lista_seq = new Lista();

    int act = 0;

    while (act != 9) {
        cout << "Acao: \n1 - Inserir elemento \n2 - Verificar se esta vazia \n3 - Verificar se esta cheia\n";
        cout << "4 - Obter o tamanho \n5 - Modificar o valor de uma posicao \n6 - Obter o valor de uma posicao\n";
        cout << "7 - Remover elemento \n8 - Mostrar a Lista \n9 - Sair\n";
        cin >> act;

        int pos = 0, el = 0;

        switch(act) {
            case 1:
                pos = 0;
                el = 0;

                cout << "Insira a posicao do elemento na lista: ";
                cin >> pos;
                cout << "Insira o valor do elemento: ";
                cin >> el;
                lista_seq->insert(pos, el);
                break;
            case 2:
                if (lista_seq->isEmpty()) {
                    cout << "A lista esta vazia" << endl;
                }
                else {
                    cout << "A lista nao esta vazia" << endl;
                }
                break;
            case 3:
                if (lista_seq->isFull()) {
                    cout << "A lista esta cheia" << endl;
                }
                else {
                    cout << "A lista nao esta cheia" << endl;
                }
                break;
            case 4:
                cout << "A lista tem tamanho " << lista_seq->getSize() << endl;
                break;
            case 5:
                pos = 0;
                cout << "Insira a posicao: " << endl;
                cin >> pos;
                cout << "Insira o novo valor: " << endl;
                cin >> el;
                lista_seq->change_element(pos, el);
                break;
            case 6:
                pos = 0;
                cout << "Insira a posicao: " << endl;
                cin >> pos;
                cout << lista_seq->getElement(pos) << endl;
                break;
            case 7:
                pos = 0;
                cout << "Insira a posicao do elemento a ser removido: " << endl;
                cin >> pos;
                lista_seq->remove(pos);
                break;
            case 8:
                lista_seq->show_list();
                break;
            case 9:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Insira uma opcao valida." << endl;
                break;
        }
    }

    delete lista_seq;
}