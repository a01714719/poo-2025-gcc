Repositorio para: Pensamiento computacional orientado a objetos (Gpo 303) semestre agosto-diciembre 2025

TC1033 Proyecto Demo – Sistema de Membresías de Gimnasio

Contexto:
Un gimnasio requiere un sistema para calcular los pagos mensuales de sus usuarios, que se dividen en tres tipos de membresía: Premium, Estándar y Cortesía.

El programa permite registrar múltiples clientes y generar un reporte consolidado de los pagos totales.

1. Altas de Nuevos Usuarios: Permite al usuario ingresar el nombre del cliente, el tipo de membresía (premium,estandar, cortesia) y la cantidad de meses.
2.  Cálculo de Pagos Mensuales:
    Premium: Paga una cuota base ($1000/mes).
    Estándar:Paga una cuota base ($500/mes).
    Cortesía:No genera pago.
3. Generación de Reporte: Al finalizar, muestra un listado de todos los clientes registrados y el pago total que debe recaudar el sistema.

Herencia y Polimorfismo:
Clase Base Abstracta: Membresia
Define los atributos comunes (cliente, meses) y los métodos (calcularPago(), info()).
Clases Hijas:Premium, Estandar, Cortesia
Cada clase hereda de Membresia e implementa su propia lógica específica para el cálculo de pagos y la información, usando polimorfismo.

Agregación / Composición
Clase Contenedora:SistemaMembresias
Contiene (agrega) una colección de objetos Membresia (a través de un std::vector de std::unique_ptr). 

Compilación y Ejecución
El proyecto está compuesto por 6 archivos 
compilacion
g++ main.cpp -o membresias_app

