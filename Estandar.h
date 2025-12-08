#ifndef ESTANDAR_H
#define ESTANDAR_H
// Archivo: Estandar.h
// Descripción: Implementa la membresía Estándar del gimnasio.
// Relación UML: Hereda de la clase base abstracta Membresia.
#include <string>
#include "membresias.h"

using namespace std;
// Clase Estandar
// Representa una membresía con precio mensual fijo.
class Estandar : public Membresia {
private:
    // Atributo específico de Estándar
    double precioMensual;

public:
    // Constructores
    // Define el precio mensual en 500 
    Estandar(string c = "", int m = 0)
        : Membresia(c, m), precioMensual(500) {}
    // Getters y setters
    double getPrecioMensual() const { return precioMensual; }
    void setPrecioMensual(double p) { precioMensual = p; }
    // Métodos  de Membresia
    double calcularPago() override {
        return meses * precioMensual;
    }
    // Devuelve una descripción de la membresía para el reporte.
    string info() override {
        return "Membresia Estandar para " + cliente +
               " por " + to_string(meses) +
               " meses (Costo Mensual: $" + to_string(precioMensual) + ")";
    }
};

#endif
