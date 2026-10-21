// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programacion
// Ejercicio 6 Semana 1
// Ejercicio donde calcularemos el aumento de sueldo de un trabajador

#include <iostream>
using namespace std;

int main(){
    // Como alternativa, he elegido usar 3 variables
    // salario_base: para almacenar el salario base del trabajador
    // aumento: para almacenar el porcentaje de aumento (2% en este caso)
    // salario_final: para almacenar el salario final del trabajador despues del aumento
    //  Se puede hacer con una sola variable, pero creo que queda mejor así, a 
    // cambio de "malgastar" un poco de memoria.
    double salario_base;
    double aumento = 2;
    double salario_final;

    cout << "Calculo del aumento de sueldo de un trabajador \n";
    cout << "Introduce el salario base: ";
    cin >> salario_base;

    salario_final = salario_base + ((salario_base  / 100) * aumento);

    cout << "El salario final es: " << salario_final;
}