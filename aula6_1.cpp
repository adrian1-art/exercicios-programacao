#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int numeros[5], estrelas[2];
    int n, e;
    bool repetido;

    srand(time(0));

    for (int i = 0; i < 5; i++) {
        do {
            repetido = false;
            n = rand() % 50 + 1;

            for (int j = 0; j < i; j++) {
                if (numeros[j] == n) {
                    repetido = true;
                }
            }
        } while (repetido);

        numeros[i] = n;
    }

    for (int i = 0; i < 2; i++) {
        do {
            repetido = false;
            e = rand() % 12 + 1;

            for (int j = 0; j < i; j++) {
                if (estrelas[j] == e) {
                    repetido = true;
                }
            }
        } while (repetido);

        estrelas[i] = e;
    }

    cout << "Numeros: ";
    for (int i = 0; i < 5; i++)
        cout << numeros[i] << " ";

    cout << "\nEstrelas: ";
    for (int i = 0; i < 2; i++)
        cout << estrelas[i] << " ";

    return 0;
}
