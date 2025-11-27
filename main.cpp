#include <iostream>
#include <string>
#include "premium.h"
#include "estandar.h"
#include "cortesia.h"
using namespace std;

int main() {
    string nombre;
    string tipo;
    int meses;

    cout << "Nombre del cliente: ";
    getline(cin, nombre);

    cout << "Tipo de membresia (premium / estandar / cortesia): ";
    cin >> tipo;

    cout << "Meses de servicio: ";
    cin >> meses;

    cout << endl;

    if (tipo == "premium") {
        Premium p;
        p.setCliente(nombre);
        p.setMeses(meses);

        cout << p.info() << endl;
        cout << "Pago total: $" << p.calcularPago() << endl;
    }
    else if (tipo == "estandar") {
        Estandar e;
        e.setCliente(nombre);
        e.setMeses(meses);

        cout << e.info() << endl;
        cout << "Pago total: $" << e.calcularPago() << endl;
    }
    else if (tipo == "cortesia") {
        Cortesia c;
        c.setCliente(nombre);
        c.setMeses(meses);

        cout << c.info() << endl;
        cout << "Pago total: $" << c.calcularPago() << endl;
    }
    else {
        cout << "Tipo de membresia no valido." << endl;
    }

    return 0;
}
