// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 22 Semana 2
// Calculadora de consumo de gasolina
// Nos pide distancia recorrida, litros consumidos y litros restantes.
// Nos devuelve el consumo de gasolina por cada 100 km, el consumo en el trayecto y la autonomía restante

#include <iostream>
using namespace std;

int main(){
    double dist, l_usados, l_restantes;
    double consumo_por_100km, eficiencia_trayecto, autonomia_restante;

    cout << "Calculadora de consumo de gasolina \n\n";
    cout << "Introduce la distancia recorrida (en km): ";
    cin >> dist;
    cout << "Introduce los litros consumidos: ";
    cin >> l_usados;
    cout << "Introduce los litros restantes: ";
    cin >> l_restantes;

    consumo_por_100km = (l_usados / dist) * 100;
    eficiencia_trayecto = dist / l_usados;
    autonomia_restante = l_restantes * eficiencia_trayecto;

    cout << "\n\nEficiencia del trayecto realizado: " << eficiencia_trayecto << " kms por litro\n";
    cout << "Consumo en el trayecto realizado: " << consumo_por_100km << " litros cada 100 km\n";
    cout << "Autonomía restante: " << autonomia_restante << " kms\n";

}