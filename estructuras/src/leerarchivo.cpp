#include <iostream>
#include "console.h"
#include <sstream>
#include <fstream>
#include "simpio.h"
#include "set.h"
#include <algorithm>
using namespace std;

Set<string> palabrasUnicas;
unsigned int masLarga = 0;

int contarPalabras(string frase) {
    istringstream palabras(frase);
    int contadorPalabras = 0;
    string palabra;
    while (palabras >> palabra) {
        palabrasUnicas.add(palabra);
        masLarga = max(masLarga, palabra.length());
        contadorPalabras++;
    }
    return contadorPalabras;
}

int main_io() {
    ifstream archivoLectura;
    int palabras = 0, caracteres = 0;
    int contadorLinea = 0;
    int totalCaracteres = 0;

    archivoLectura.open("ejemplo.txt");

    string linea;

    while (getline(archivoLectura, linea)) {
        contadorLinea++;
        caracteres = linea.length();
        totalCaracteres += caracteres;
        palabras = contarPalabras(linea);
        cout << "Linea " << contadorLinea;
        cout << ": Palabras: " << palabras;
        cout << " Caracteres: " << caracteres << endl;
    }
    float promedio = totalCaracteres/contadorLinea;

    cout << "Palabra mas larga: " << masLarga;
    cout << "Promedio de caracteres/linea" << promedio << endl;
    cout << "Palabras unicas: " << palabrasUnicas.toString() << endl;
    return 0;
}
