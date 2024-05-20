#include <iostream>
using namespace std;
int main() {
    int numero;
    int factorial;

    cout << "ingrese un numero:";
    cin >> numero;
    if (numero<0){
    cout << "el factorial de un numero negativo no se puede.";
    }
    else {
        cout << "el factorial de " <<numero << "es";
    while (numero>0){
        factorial*=numero;
        numero--;
    }
    cout << factorial;
    }
        return 0;
}