// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programacion
// Ejercicio 10 Semana 1
// Ejercicio donde convertiremos dos grados a radianes
// Usaremos la formula r = g*pi/180

#include <iostream>
using namespace std;

int main(){
    double grado_1;
    double grado_2;
    double radian_1;
    double radian_2;
    double pi = 3.14159;

    cout << "Calculo de la conversion de grados a radianes \n";
    cout << "Introduce el primer valor en grados: ";
    cin >> grado_1;
    cout << "Introduce el segundo valor en grados: ";
    cin >> grado_2;

    radian_1 = grado_1 * pi / 180;
    radian_2 = grado_2 * pi / 180;

    cout << "El primer valor en radianes es: " << radian_1 << "\n";
    cout << "El segundo valor en radianes es: " << radian_2;
}