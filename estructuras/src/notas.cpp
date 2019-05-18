#include <iostream>
#include <fstream>
#include "vector.h"
#include "map.h"
#include "console.h"
#include "simpio.h"
#include <sstream>

using namespace std;

int main() {
    ifstream archivo_notas;
    archivo_notas.open("notas.txt");
    Map<string, Vector<int>> planilla;
    string estudiante;
    while (getline(archivo_notas, estudiante)) {
        istringstream registro(estudiante);
        string nombre;
        int nota;
        Vector<int> notas;
        registro >> nombre;
//        for (int i=0; i<3; i++) {
//            registro >> nota;
//            notas.add(nota);
//        }
        while (registro >> nota) {
            notas.add(nota);
        }
        planilla.put(nombre, notas);
    }

    cout << planilla.toString() << endl;
    return 0;
}
