#ifndef CORTESIA_H
#define CORTESIA_H
#include <string>
using namespace std;

class Cortesia {
private:
    string cliente;

public:
    Cortesia(string c) : cliente(c) {}

    double calcularPago() {
        return 0;
    }

    string info() {
        return "Membresia de Cortesia para " + cliente;
    }
};

#endif

