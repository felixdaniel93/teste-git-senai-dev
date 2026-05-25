/*
* Programa de controle de estacionamento
*/

//inclusão das bibliotecas do projeto
#include <iostream>
using namespace std;


int main() {
    int opcao;
    do {
        // Menu principal
        cout << "\nMenu:\n1 - Entrada\n2 - Saida\n3 - Sair do Sistema\nEscolha uma opcao: ";
        cin >> opcao;

        //Ações de entrada do menu principal
        switch (opcao) {
            case 1:
                // Incluir a função para de registro de Entrada
                break;
            case 2:
                // Incluir a função para de registro de Saída
                break;
            case 3:
                cout << "Saindo do sistema..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 3);

    return 0;

}
