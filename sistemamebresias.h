#ifndef SISTEMAMEMBRESIAS_H
#define SISTEMAMEMBRESIAS_H
#include "membresia.h"
#include <vector>
#include <memory> 

using namespace std;

class SistemaMembresias {
private:
    vector<unique_ptr<Membresia>> listaMembresias;

public:
  
    SistemaMembresias() {}
    ~SistemaMembresias() = default;

    void agregarMembresia(unique_ptr<Membresia> nuevaMembresia) {
        if (nuevaMembresia != nullptr) {
          
            listaMembresias.push_back(std::move(nuevaMembresia));
            cout << "\n Membresia agregada al sistema.\n";
        }
    }

    // Método
    void generarReporte() const {
        double pagoTotalSistema = 0.0;
        int numMembresias = listaMembresias.size();

        cout << "\nReporte";
        cout << "Total de clientes registrados: " << numMembresias << "\n";

        if (numMembresias == 0) {
            cout << "No hay membresias registradas.\n";
            return;
        }

        for (const auto& m : listaMembresias) {
            
            cout << "Cliente: " << m->getCliente() << "\n";
            cout << "Info: " << m->info() << "\n";
            double pago = m->calcularPago();
            cout << "Pago a realizar: $" << pago << "\n";
            pagoTotalSistema += pago;
        }


        cout << "Pago total recuadado: $" << pagoTotalSistema << "\n";
       
    }
};

#endif
