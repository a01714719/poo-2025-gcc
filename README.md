Repositorio para: Pensamiento computacional orientado a objetos (Gpo 303) semestre agosto-diciembre 2025

TC1033 Proyecto Demo – Sistema de Membresías de Gimnasio

Contexto: Un gimnasio requiere un sistema para calcular los pagos mensuales de sus usuarios, que se dividen en tres tipos de membresía: Premium, Estándar y Cortesía.

El programa permite registrar múltiples clientes y generar un reporte consolidado de los pagos totales.

Altas de Nuevos Usuarios: Permite al usuario ingresar el nombre del cliente, el tipo de membresía (premium,estandar, cortesia) y la cantidad de meses.
Cálculo de Pagos Mensuales: Premium: Paga una cuota base ($1000/mes). Estándar:Paga una cuota base ($500/mes). Cortesía:No genera pago.
Generación de Reporte: Al finalizar, muestra un listado de todos los clientes registrados y el pago total que debe recaudar el sistema.
Herencia y Polimorfismo: Clase Base Abstracta: Membresia Define los atributos comunes (cliente, meses) y los métodos (calcularPago(), info()). Clases Hijas:Premium, Estandar, Cortesia Cada clase hereda de Membresia e implementa su propia lógica específica para el cálculo de pagos y la información, usando polimorfismo.

Agregación / Composición Clase Contenedora:SistemaMembresias Contiene (agrega) una colección de objetos Membresia (a través de un std::vector de std::unique_ptr).

Correciones finales:

Compilación y Ejecución:

para compilar el programa: g++ main.cpp -o membresias_app
para ejecutar el programa: ./membresias_app


1) Corrección de imports / nombres de archivos de cabecera
Qué correcciones realicé:
Se corrigieron los #include para que coincidan con los nombres de los archivos (incluyendo mayúsculas/minúsculas):

membresia.h → membresias.h

premium.h → Premium.h

estandar.h → Estandar.h

cortesia.h → Cortesia.h

Indicador / sub-competencia:

Implemento las clases en C++ siguiendo el diseño del diagrama de clases en UML.

Sigo estándares en todo mi código fuente: estilo, sangrías, comentarios, nombres, etc.

Dónde se encuentran:

main.cpp (sección de #include).

sistemamembresias.h (include de la clase base).

Premium.h, Estandar.h, Cortesia.h (include de la clase base).

2) Inclusión de librerías estándar faltantes

Qué correcciones realicé:
Se añadieron librerías necesarias para compilar correctamente:

<limits> para numeric_limits

<cctype> para tolower

Indicador / sub-competencia:

Implemento clases apegadas a requerimientos a partir de un modelo.

Implemento las clases en C++ siguiendo el diseño del diagrama de clases en UML.

Dónde se encuentran:

main.cpp (sección de #include).

3) Estabilización de entrada de usuario (getline)

Qué correcciones realicé:
Se usa cin.ignore(...) para evitar que getline() lea una línea vacía después de un cin >>.

Indicador / sub-competencia:

Compruebo el acceso a los atributos y métodos de la clase (encapsulamiento correcto y uso útil de objetos).

Implemento clases apegadas a requerimientos a partir de un modelo.

Dónde se encuentran:

main.cpp (función crearNuevaMembresia()).

4) Manejo correcto de herencia y polimorfismo

Qué correcciones realicé:
Se validó que las clases hijas implementen correctamente:

calcularPago()

info()
y que Membresia sea abstracta.

Indicador / sub-competencia:

Implemento herencia de manera correcta y útil.

Utilizo el concepto de herencia en el diagrama de clases de manera adecuada.

Dónde se encuentran:

membresias.h (métodos virtuales puros).

Premium.h, Estandar.h, Cortesia.h (override).

5) Implementación y verificación de composición

Qué correcciones realicé:
Se confirmó la composición en SistemaMembresias usando:
vector<unique_ptr<Membresia>>, y el método agregarMembresia().

Indicador / sub-competencia:

Utilizo el concepto de composición (o agregación) en el diagrama de clases.

Implemento composición (o agregación) siguiendo mi diagrama de clases.

Dónde se encuentran:

sistemamembresias.h (atributo listaMembresias, método agregarMembresia()).

6) Corrección de comentarios y estilo

Qué correcciones realicé:
Se estandarizaron comentarios en todos los archivos para evitar “comentarios irregulares”, agregando encabezado por archivo, descripción de clase y secciones consistentes.

Indicador / sub-competencia:

Sigo estándares en todo mi código fuente: estilo, sangrías, comentarios, nombres, etc.

Dónde se encuentran:

main.cpp, membresias.h, Premium.h, Estandar.h, Cortesia.h, sistemamembresias.h.

7) Actualización de compilación replicable en README

Qué correcciones realicé:
Se ajustó el comando de compilación y ejecución para que sea claro y reproducible.

Indicador / sub-competencia:

Cumplo con estándares en mi repositorio: tiene un README claro que explica el proyecto.

Dónde se encuentran:

README.md (sección de compilación y ejecución).

Muchas gracias y feliz navidad profe ;)
