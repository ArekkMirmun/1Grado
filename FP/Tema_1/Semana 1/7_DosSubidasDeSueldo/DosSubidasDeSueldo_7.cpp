// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programacion
// Ejercicio 7 Semana 1
// Ejercicio donde calcularemos el aumento de sueldo de un trabajador, pero esta vez con dos aumentos

#include <iostream>
using namespace std;

int main(){

    double salario_base;
    // El conjunto se calcula sumando ambos porcentajes
    double salario_final_conjunto;
    // El secuencial aplicando primero uno y luego otro 
    // (en el enunciado aparece aplicado primero el de productividad, por lo que aplico ese primero)
    double salario_final_secuencial;
    // Aumentos medidos en porcentajes
    double aumento_antiguedad = 2;
    double aumento_productividad = 3;

    cout << "Calculo del aumento de sueldo de un trabajador \n";
    cout << "Introduce el salario base: ";
    cin >> salario_base;

    // Calculamos el salario conjunto sumando ambos porcentajes
    salario_final_conjunto = salario_base + ((salario_base  / 100) * (aumento_antiguedad + aumento_productividad));

    // Calculamos el salario secuencial aplicando primero el aumento de productividad
    salario_final_secuencial = salario_base + ((salario_base  / 100) * aumento_antiguedad);
    // Y luego lo "recalculamos" usando el anteriormente calculado, y sumandole el aumento de productividad
    salario_final_secuencial = salario_final_secuencial + ((salario_final_secuencial  / 100) * aumento_productividad);

    cout << "El salario final en conjunto es: " << salario_final_conjunto;
    cout << "\nEl salario final secuencial es: " << salario_final_secuencial;
}