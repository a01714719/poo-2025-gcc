#include <iostream>
#include "premium.h"
#include "estandar.h"
#include "cortesia.h"
using namespace std;

int main() {
    Premium p("Sebastian", 3);
    Estandar e("Erik", 2);
    Cortesia c("Invitado");

    cout << p.info() << " | Pago: $" << p.calcularPago() << endl;
    cout << e.info() << " | Pago: $" << e.calcularPago() << endl;
    cout << c.info() << " | Pago: $" << c.calcularPago() << endl;

    return 0;
}

