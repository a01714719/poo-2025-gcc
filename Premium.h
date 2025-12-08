#ifndef PREMIUM_H
#define PREMIUM_H
// Archivo: Premium.h
// Descripción: Implementa la membresía Premium del gimnasio.
// Relación UML: Hereda de la clase base abstracta Membresia.
#include <string>
#include "membresias.h"

using namespace std;
// Clase Premium
// Representa una membresía con precio mensual fijo.
class Premium : public Membresia {
private:
    // Atributo específico de Premium
    double precioMensual;

public:
    // Constructores
    // Inicializa cliente y meses usando el constructor de Membresia.
    // Define el precio mensual en 1000 
    Premium(string c = "", int m = 0)
        : Membresia(c, m), precioMensual(1000) {}
    // Getters y setters
    // Permiten consultar y modificar el precio mensual si se requiere.
    double getPrecioMensual() const { return precioMensual; }
    void setPrecioMensual(double p) { precioMensual = p; }
    // Métodos de Membresia
    // Calcula el pago total multiplicando meses por precio mensual.
    double calcularPago() override {
        return meses * precioMensual;
    }
    // Devuelve una descripción de la membresía para el reporte.
    string info() override {
        return "Membresia Premium para " + cliente +
               " por " + to_string(meses) +
               " meses (Costo Mensual: $" + to_string(precioMensual) + ")";
    }
};

#endif
