#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    int usuario, 
    int maquina;
    int intentos; 

    do {
        cout << "Elige entre 1,2,3 :\n1. Piedra\n2. Papel\n3. Tijera\n";
        cin >> usuario;

        maquina = rand() % 3 + 1;

        cout << "La máquina elige: " << maquina << endl;

        if (usuario == maquina) {
            cout << "el resultado es Empate\n";
        } else if ((usuario == 1 && maquina == 3) || (usuario == 2 && maquina == 1) || (usuario == 3 && maquina == 2)) {
            cout << "Ganaste\n";
        } else {
            cout << "Perdiste\n";
        }

        contador++; 

    } while (intentos < 3);

    return 0;
}