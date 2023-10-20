#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int capacidad = 10;
    vector<int> elementos(capacidad);
    int cima = -1;
    cout << "Teclea elemento de la pila (termina con -1)\n";
    int x = 0;
    const int CLAVE = -1;

    while (x != CLAVE) {
        string entrada;
        cin >> entrada;
        try {
            x = stoi(entrada);
            if (cima < capacidad - 1) {
                cima++;
                elementos[cima] = x;
            }
            else {
                cout << "Pila llena\n";
                break;
            }
        }
        catch (const invalid_argument&) {
            cout << "Entrada no válida\n";
        }
    }

    if (cima >= 0) {
        cout << "Elementos de la pila\n";
        while (cima >= 0) {
            cout << elementos[cima] << " ";
            cima--;
        }
        cout << x << " ";
    }
    else {
        cout << "Pila vacía\n";
    }

    return 0;
}