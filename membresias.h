#ifndef MEMBRESIAS_H
#define MEMBRESIAS_H
// Archivo: membresias.h
// Descripción: Clase base abstracta del sistema de membresías.
// Relación UML: Clase padre de Premium, Estandar y Cortesia.
#include <string>
using namespace std;
// Define los atributos comunes y obliga a las clases hijas
// a implementar calcularPago() & info().
class Membresia {
protected:
    // Atributos comunes a cualquier membresía
    string cliente;
    int meses;
public:
    // Constructores
    // Permite crear una membresía con datos iniciales.
    Membresia(string c = "", int m = 0) : cliente(c), meses(m) {}
    // Destructor virtual
    virtual ~Membresia() = default;
    // Getters
    // Permiten consultar los atributos.
    string getCliente() const { return cliente; }
    int getMeses() const { return meses; }
    // Setters
    // Permiten actualizar los atributos.
    void setCliente(const string &c) { cliente = c; }
    void setMeses(int m) { meses = m; }
    // Métodos polimórficos 
    // Cada clase hija debe implementar su propia lógica.
    virtual double calcularPago() = 0;
    virtual string info() = 0;
};

#endif
