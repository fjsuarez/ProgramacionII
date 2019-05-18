#include <iostream>
#include "console.h"
#include "map.h"
#include "hashmap.h"

using namespace std;

int main_mapas() {
    Map<string, int> guia;

    guia["Franco"]=71312345;
    guia["Ruben"]=77612345;
    guia["Braulio"]=78012345;

    for (string nombre: guia) {
        cout << nombre << ": " << guia[nombre] << endl;
    }

    HashMap<string, int> guia_hash;
    guia_hash["Franco"]=71312345;
    guia_hash["Ruben"]=77612345;
    guia_hash["Braulio"]=78012345;
    for (string nombre: guia_hash) {
        cout << nombre << ": " << guia_hash[nombre] << endl;
    }

    return 0;
}
