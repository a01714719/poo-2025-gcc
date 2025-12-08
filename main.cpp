// Archivo: main.cpp
// Descripción: Punto de entrada del programa.
#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
#include <limits>
#include <cctype>

#include "membresias.h"
#include "sistemamembresias.h"
#include "Premium.h"
#include "Estandar.h"
#include "Cortesia.h"

using namespace std;
// Crea dinámicamente una membresía del tipo indicado por el usuario.
unique_ptr<Membresia> crearNuevaMembresia() {
    string nombre;
    string tipo;
    int meses;
//
    cout << "Registro de nueva membresia\n";
    cout << "Nombre del cliente: ";
    getline(cin, nombre);
    cout << "Tipo de membresia (premium / estandar / cortesia): ";
    cin >> tipo;
    cout << "Meses de servicio: ";
    cin >> meses;

    // Normaliza a minúsculas
    transform(tipo.begin(), tipo.end(), tipo.begin(),
              [](unsigned char ch) { return static_cast<char>(tolower(ch)); });
   
    // Crea la clase hija correcta según el tipo escrito.
    if (tipo == "premium") {
        return make_unique<Premium>(nombre, meses);
    } else if (tipo == "estandar") {
        return make_unique<Estandar>(nombre, meses);
    } else if (tipo == "cortesia") {
        return make_unique<Cortesia>(nombre, meses);
    }
// Si el tipo no es válido, no se crea ninguna membresía.
    cout << "Tipo de membresia no valido.\n";
    return nullptr;
}
int main() {
    // Contenedor principal del sistema (composición).
    SistemaMembresias miSistema;
    char continuar = 's';
    // Permite registrar múltiples clientes.
    while (continuar == 's' || continuar == 'S') {
        // Se crea una membresía usando polimorfismo.
        unique_ptr<Membresia> nueva = crearNuevaMembresia();
        // Se transfiere la propiedad de la membresía al sistema.
        miSistema.agregarMembresia(std::move(nueva));

        cout << "\n¿Desea registrar otra membresia? (s/n): ";
        cin >> continuar;
        // Limpia el ENTER que deja 'cin >> continuar' para que la siguiente llamada a getline() funcione correctamente.
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    // Genera el reporte final del sistema.
    miSistema.generarReporte();

    return 0;
}
