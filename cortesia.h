#ifndef CORTESIA_H
#define CORTESIA_H
#include "membresia.h" 
#include <string>

class Cortesia : public Membresia {
public:
    
    Cortesia(string c = "", int m = 0) : Membresia(c, m) {}

    double calcularPago() override {
        return 0.0;
    }

    string info() override {
        return "Membresia de Cortesia (GRATIS) para " + cliente +
               " por " + to_string(meses) + " meses";
    }
};

#endif
