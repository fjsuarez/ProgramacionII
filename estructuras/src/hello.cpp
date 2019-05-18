#include <iostream>
#include "console.h"
#include <sstream>
#include "vector.h"
#include "simpio.h"
using namespace std;

int main_old() {
    istringstream input("David Aguilera 71321345 batman pepino");
    string nombre, apellido;
    int numero;
    string token;
    Vector<string> tokens;

    input >> nombre >> apellido;
    input >> numero;

    cout << "Nombre: " << nombre << " Apellido: " << apellido << endl;
    cout << "Numero: " << numero << endl;

    while (input >> token) { // hasta que nos quedemos sin tokens
        tokens.add(token);  // los agregamos a un vector
    }
    cout << tokens.toString() << endl;

    ostringstream output;
    int edad = 24;
    int IQ = 120;
    output << "David tiene " << edad << " años";
    output << " y su IQ es de " << IQ;
    string resultado = output.str();
    cout << resultado;
    return 0;
}
