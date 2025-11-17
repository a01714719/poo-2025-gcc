#ifndef PREMIUM_H
#define PREMIUM_H
#include <string>
using namespace std;

class Premium {
private:
    string cliente;
    int meses;
    double precioMensual;

public:
    Premium(string c, int m) : cliente(c), meses(m), precioMensual(1000) {}

    double calcularPago() {
        return meses * precioMensual;
    }

    string info() {
        return "Membresia Premium para " + cliente;
    }
};

#endif

