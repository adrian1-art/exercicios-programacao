#include <iostream>
#include <string>

using namespace std;

struct Carro {
    string marca;
    string modelo;
    string cor;
    string matricula;
    int numeroPortas;
};

int main() {
    Carro carros[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nCarro " << i + 1 << endl;

        cout << "Marca: ";
        getline(cin, carros[i].marca);

        cout << "Modelo: ";
        getline(cin, carros[i].modelo);

        cout << "Cor: ";
        getline(cin, carros[i].cor);

        cout << "Matricula: ";
        getline(cin, carros[i].matricula);

        cout << "Numero de portas: ";
        cin >> carros[i].numeroPortas;
        cin.ignore();
    }

    cout << "\n--- Lista de carros ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "Carro " << i + 1 << ": "
             << carros[i].marca << " "
             << carros[i].modelo << ", "
             << carros[i].cor << ", "
             << carros[i].matricula << ", "
             << carros[i].numeroPortas << " portas"
             << endl;
    }

    return 0;
}
