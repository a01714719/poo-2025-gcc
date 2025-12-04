#ifndef ESTANDAR_H
#define ESTANDAR_H
#include "membresia.h" 
#include <string>

class Estandar : public Membresia {
private:
    double precioMensual; 

public:
    Estandar(string c = "", int m = 0) : Membresia(c, m), precioMensual(500) {}

    // GETTER/SETTER 
    double getPrecioMensual() const { return precioMensual; }
    void setPrecioMensual(double p) { precioMensual = p; }
    
    double calcularPago() override {
        return meses * precioMensual;
    }

    string info() override {
        return "Membresia Estandar para " + cliente +
               " por " + to_string(meses) + " meses (Costo Mensual: $" + to_string(precioMensual) + ")";
    }
};

#endif
