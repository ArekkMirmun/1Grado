// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 26 Semana 2
// Programa que transforma un char de mayúscula a minúscula

#include <iostream>
using namespace std;

int main(){
    const int DIFF_MAY_MIN = 'a' - 'A'; // Diferencia entre mayuscula y minuscula en ASCII
    char may, min;

    cout << "Introduce un carácter en mayúscula: ";
    cin >> may;

    min = may + DIFF_MAY_MIN; // Se suma la diferencia para obtener la minuscula

    cout << "El carácter en minúscula es: " << min;
}