#ifndef SISTEMAMEMBRESIAS_H
#define SISTEMAMEMBRESIAS_H
// Archivo: sistemamembresias.h
// Descripción: Clase contenedora del sistema.
// Relación UML: Implementa composición/agrupación de Membresia.
#include <vector>
#include <memory>
#include <iostream>
#include "membresias.h"

using namespace std;
// Clase SistemaMembresias
// Administra el registro de clientes y genera reportes.
class SistemaMembresias {
private:
    // Composición:
    // El sistema es dueño de las membresías registradas.
    vector<unique_ptr<Membresia>> listaMembresias;

public:
    // Constructores / destructores
    SistemaMembresias() = default;
    ~SistemaMembresias() = default;
    // Agrega una nueva membresía al sistema.
    void agregarMembresia(unique_ptr<Membresia> nuevaMembresia) {
        if (nuevaMembresia != nullptr) {
            listaMembresias.push_back(std::move(nuevaMembresia));
            cout << "\nMembresia agregada al sistema.\n";
        }
    }
    // Genera un reporte de todas las membresías registradas.
    // Usa polimorfismo para obtener info y pago de cada tipo.
    void generarReporte() const {
        double pagoTotalSistema = 0.0;
        int numMembresias = static_cast<int>(listaMembresias.size());

        cout << "\nReporte\n";
        cout << "Total de clientes registrados: " << numMembresias << "\n";

        if (numMembresias == 0) {
            cout << "No hay membresias registradas.\n";
            return;
        }

        for (const auto &m : listaMembresias) {
            cout << "\nCliente: " << m->getCliente() << "\n";
            cout << "Info: " << m->info() << "\n";

            double pago = m->calcularPago();
            cout << "Pago a realizar: $" << pago << "\n";

            pagoTotalSistema += pago;
        }

        cout << "\nPago total recaudado: $" << pagoTotalSistema << "\n";
    }
};

#endif
