#ifndef CORTESIA_H
#define CORTESIA_H
// Archivo: Cortesia.h
// Descripción: Implementa la membresía Cortesía del gimnasio.
// Relación UML: Hereda de la clase base abstracta Membresia.
#include <string>
#include "membresias.h"

using namespace std;
// Clase Cortesia
// Representa una membresía gratuita
class Cortesia : public Membresia {

    public:
    // Constructores
    Cortesia(string c = "", int m = 0) : Membresia(c, m) {}
    // Métodos de Membresia
    // Cortesía no genera pago.
    double calcularPago() override {
        return 0.0;
    }
    // Devuelve una descripción de la membresía para el reporte.
    string info() override {
        return "Membresia de Cortesia (GRATIS) para " + cliente +
               " por " + to_string(meses) + " meses";
    }
};

#endif
