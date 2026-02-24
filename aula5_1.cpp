#include <iostream>
using namespace std;

int numero;

void EscolhaNumero() {
    cout << "Escreve um número: ";
    cin >> numero;
}
void Tabuada() {
    cout << "\nTabuada do " << numero << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << numero << " = " << i * numero << endl;
    }
}

void Fatorial() {
    int resultado = 1;

    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }

    cout << "\nFatorial de " << numero << " = " << resultado << endl;
}

int main() {
    int opcao;

    EscolhaNumero();

    while (true) {
        cout << "\nEscolha uma opção:";
        cout << "\n1 - Tabuada";
        cout << "\n2 - Fatorial";
        cout << "\n3 - Escolher outro número";
        cout << "\nOpção: ";
        cin >> opcao;

        if (opcao != 1 && opcao != 2 && opcao != 3) {
            cout << "Essa opção não existe!\n";
        }
        else if (opcao == 1) {
            Tabuada();
        }
        else if (opcao == 2) {
            Fatorial();
        }
        else if (opcao == 3) {
            EscolhaNumero();
        }
    }

    return 0;
}
