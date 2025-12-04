#ifndef PREMIUM_H
#define PREMIUM_H
#include "membresia.h" 
#include <string>

class Premium : public Membresia {
private:

    double precioMensual; 

public:
    Premium(string c = "", int m = 0) : Membresia(c, m), precioMensual(1000) {}


    // GETTER/SETTER 
    double getPrecioMensual() const { return precioMensual; }
    void setPrecioMensual(double p) { precioMensual = p; }
    
    double calcularPago() override {
        return meses * precioMensual;
    }

    string info() override {
        return "Membresia Premium para " + cliente +
               " por " + to_string(meses) + " meses (Costo Mensual: $" + to_string(precioMensual) + ")";
    }
};

#endif
