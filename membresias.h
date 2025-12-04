#ifndef MEMBRESIA_H
#define MEMBRESIA_H

#include <string>
#include <iostream>

using namespace std;

class Membresia {
protected:
    string cliente;
    int meses;

public:
    Membresia(string c = "", int m = 0) : cliente(c), meses(m) {}
    virtual ~Membresia() = default; 

    string getCliente() const { return cliente; }
    int getMeses() const { return meses; }

    void setCliente(const string &c) { cliente = c; }
    void setMeses(int m) { meses = m; }

    virtual double calcularPago() = 0;
    virtual string info() = 0;
};

#endif
