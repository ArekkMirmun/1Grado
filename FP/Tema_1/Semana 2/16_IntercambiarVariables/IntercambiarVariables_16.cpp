// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 16 Semana 2
#include <iostream>
using namespace std;

int main(){
    double caja_izda, caja_dcha, caja_temp;

    cout << "Simulador del juego inspirado en los triles \n";
    cout << "Introduce el valor de la caja izquierda: ";
    cin >> caja_izda;
    cout << "Introduce el valor de la caja derecha: ";
    cin >> caja_dcha;

    // Para este intercambio es necesario una variable temporal
    // que almacene el valor de una de las cajas mientras se realiza el intercambio
    // ya que, como aparece en el guion, si no se hace así, se perdería el valor de la caja izquierda al asignarle el valor de la caja derecha.
    // y ambas cajas tendrían el mismo valor, el de la caja derecha.

    // caja_temp = caja_izda;
    // caja_izda = caja_dcha;
    // caja_dcha = caja_temp;

    // Investigando en la librería std, tenemos swap, cuya función es la misma que
    // la que hemos implementado arriba.
    swap(caja_izda, caja_dcha);


    cout << "Después del intercambio: \n";
    cout << "Caja izquierda: " << caja_izda << "\n";
    cout << "Caja derecha: " << caja_dcha << "\n";
}