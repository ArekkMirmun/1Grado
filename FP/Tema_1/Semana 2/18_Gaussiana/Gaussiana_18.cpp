// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 18 Semana 2
// Calculadora de distribución normal (Campana de Gauss)
// Siguiendo la siguiente formula: f(x) = (1 / (σ * sqrt(2 * π))) * e^(-0.5 * ((x - μ) / σ)^2)

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double media, desviación, valor_x;
    double altura_campana,
           exponente, 
           factor_decaimiento, 
           probabilidad;

    cout << "Calculadora de distribución normal (Campana de Gauss) \n";
    cout << "Introduce el valor de la media: ";
    cin >> media;
    cout << "Introduce el valor de la desviación estándar: ";
    cin >> desviación;
    cout << "Introduce el valor de x: ";
    cin >> valor_x;

    // Cálculo de la altura de la campana de Gauss (usando la constante M_PI de la librería cmath)
    // (1 / (σ * sqrt(2 * π)))
    altura_campana = 1.0 / (desviación * sqrt(2 * M_PI));

    // Cálculo del exponente (-0.5 * ((x - μ) / σ)^2)
    exponente = -0.5 * pow((valor_x - media) / desviación, 2);

    // Cálculo del factor de decaimiento (e ^ exponente)
    factor_decaimiento = exp(exponente);

    probabilidad = altura_campana * factor_decaimiento;

    cout << "El valor de la función de densidad de probabilidad en x = " << valor_x << " es: " << probabilidad;
}