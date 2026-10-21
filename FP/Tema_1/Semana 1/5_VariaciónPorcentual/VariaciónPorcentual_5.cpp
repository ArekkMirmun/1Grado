// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programacion
// Ejercicio 5 Semana 1
// Ejercicio donde calcularemos la variacion porcentual entre dos numeros

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double valor_inicial;
    double valor_final;
    double variacion_porcentual;

    cout << "Calculo de la variacion porcentual entre dos numeros \n";
    cout << "Introduce el valor inicial: ";
    cin >> valor_inicial;
    cout << "Introduce el valor final: ";
    cin >> valor_final;
    
    variacion_porcentual = abs( 100 * ((valor_final - valor_inicial) / valor_inicial));

    cout << "La variacion porcentual es: " << variacion_porcentual << "%";

}