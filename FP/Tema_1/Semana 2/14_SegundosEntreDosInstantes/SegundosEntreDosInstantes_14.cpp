// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 14 Semana 2

#include <iostream>
using namespace std;

int main(){
    int hora1, minuto1, segundo1;
    int hora2, minuto2, segundo2;
    int total1, total2, diferencia;


    cout << "Calculadora de diferencia de tiempo entre dos instantes.";
    cout << "Introduce la primera hora (hh mm ss): ";
    cin >> hora1 >> minuto1 >> segundo1;
    cout << "Introduce la segunda hora (hh mm ss): ";
    cin >> hora2 >> minuto2 >> segundo2;

    total1 = hora1 * 3600 + minuto1 * 60 + segundo1;
    total2 = hora2 * 3600 + minuto2 * 60 + segundo2;
    diferencia = total2 - total1;

    cout << "La diferencia es de " << diferencia << " segundos.";
}