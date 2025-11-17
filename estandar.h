#ifndef ESTANDAR_H
#define ESTANDAR_H
#include <string>
using namespace std;

class Estandar {
private:
    string cliente;
    int meses;
    double precioMensual;

public:
    Estandar(string c, int m) : cliente(c), meses(m), precioMensual(500) {}

    double calcularPago() {
        return meses * precioMensual;
    }

    string info() {
        return "Membresia Estandar para " + cliente;
    }
};

#endif
