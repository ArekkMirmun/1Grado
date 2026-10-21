// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 19 Semana 2
#include <iostream>
using namespace std;

int main(){
    double caja_izda, caja_centr, caja_dcha, caja_temp;

    cout << "Simulador del juego inspirado en los triles (Version de 3 cajas) \n";
    cout << "Introduce el valor de la caja izquierda: ";
    cin >> caja_izda;
    cout << "Introduce el valor de la caja central: ";
    cin >> caja_centr;
    cout << "Introduce el valor de la caja derecha: ";
    cin >> caja_dcha;

    //Se realiza el intercambio de izquierda a central, central a derecha y derecha a izquierda (horario)
    caja_temp = caja_centr;
    caja_centr = caja_izda;
    caja_izda = caja_dcha;
    caja_dcha = caja_temp;

    cout << "Después del intercambio: \n";
    cout << "Caja izquierda: " << caja_izda << "\n";
    cout << "Caja central: " << caja_centr << "\n";
    cout << "Caja derecha: " << caja_dcha << "\n";
}