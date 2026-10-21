// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 28 Semana 2
// Calculadora de escalado de un número en un rango
#include <iostream>
using namespace std;

int main(){
    int min, max, top, n, k;

    cout << "Calculadora de escalado de un número en un rango \n\n";
    cout << "Introduce el valor mínimo del rango base: ";
    cin >> min;
    cout << "Introduce el valor máximo del rango base: ";
    cin >> max;
    cout << "Introduce el valor máximo del rango de salida: ";
    cin >> top;
    cout << "Introduce el número a escalar: ";
    cin >> n;

    // Calculamos la posición relativa de n dentro del rango [min, max]
    // y la convertimos al rango [0, top]
    // La parte (n - min) / (max - min) nos da la posición relativa de n en el rango base
    // Después multiplicamos por top para escalarlo al rango de salida
    k = ( (n - min) / (max - min) ) * top;

    cout << "\nEl número " << n << " escalado al rango de salida es: " << k;
}