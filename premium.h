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
    Premium(string c = "", int m = 0) : cliente(c), meses(m), precioMensual(1000) {}

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
        return "Membresia Premium para " + cliente + 
               " por " + to_string(meses) + " meses";
    }
};

#endif
