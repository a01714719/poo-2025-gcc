#ifndef CORTESIA_H
#define CORTESIA_H
#include <string>
using namespace std;

class Cortesia {
private:
    string cliente;
    int meses;

public:
    Cortesia(string c = "", int m = 0) : cliente(c), meses(m) {}

    // GETTERS
    string getCliente() const { return cliente; }
    int getMeses() const { return meses; }

    // SETTERS
    void setCliente(const string &c) { cliente = c; }
    void setMeses(int m) { meses = m; }

    double calcularPago() {
        return 0;
    }

    string info() {
        return "Membresia de Cortesia para " + cliente +
               " por " + to_string(meses) + " meses";
    }
};

#endif
