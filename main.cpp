#include <iostream>
#include <string>
#include <memory>
#include <algorithm> 
#include "membresia.h"
#include "sistemamembresias.h"
#include "premium.h"
#include "estandar.h"
#include "cortesia.h"

using namespace std;

unique_ptr<Membresia> crearNuevaMembresia() {
    string nombre;
    string tipo;
    int meses;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "\nRegistro de nueva membresia\n";
    cout << "Nombre del cliente: ";
    getline(cin, nombre);

    cout << "Tipo de membresia (premium / estandar / cortesia): ";
    cin >> tipo;

    cout << "Meses de servicio: ";
    cin >> meses;

    transform(tipo.begin(), tipo.end(), tipo.begin(), ::tolower);

    if (tipo == "premium") {
        return make_unique<Premium>(nombre, meses);
    }
    else if (tipo == "estandar") {
        return make_unique<Estandar>(nombre, meses);
    }
    else if (tipo == "cortesia") {
        return make_unique<Cortesia>(nombre, meses);
    }
    else {
        cout << "Tipo de membresia no valido.\n";
        return nullptr;
    }
}

int main() {
    SistemaMembresias miSistema; 
    
    char continuar = 's';
    
    while (continuar == 's' || continuar == 'S') {
        unique_ptr<Membresia> nueva = crearNuevaMembresia();
        
        miSistema.agregarMembresia(std::move(nueva));
        
        cout << "\n¿Desea registrar otra membresia? (s/n): ";
        cin >> continuar;
    }

    miSistema.generarReporte();

    return 0;
}
