//para guardar info, sirve para mi proyecto
#include <iostream>
using namespace std;
struct datosPersona {
    string nombre;
    char inicial;
    int edad;
    float nota;
};

int main (){
    datosPersona persona;
    persona.nombre = " Juan ";
    persona.inicial = 'j';
    persona.edad = 9;
    cout << persona.nombre;
    return 0;
}