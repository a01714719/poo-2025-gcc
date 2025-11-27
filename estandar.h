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
    Estandar(string c = "", int m = 0) : cliente(c), meses(m), precioMensual(500) {}

    // GETTERS
    string getCliente() const { return cliente; }
    int getMeses() const { return meses; }
    double getPrecioMensual() const { return precioMensual; }

    // SETTERS
    void setCliente(const string &c) { cliente = c; }
    void setMeses(int m) { meses = m; }
    void setPrecioMensual(double p) { precioMensual = p; }

    double calcularPago() {
        return meses * precioMensual;
    }

    string info() {
        return "Membresia Estandar para " + cliente +
               " por " + to_string(meses) + " meses";
    }
};

#endif
