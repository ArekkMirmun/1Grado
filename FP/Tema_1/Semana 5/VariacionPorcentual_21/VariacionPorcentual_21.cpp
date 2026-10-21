// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 21 Semana 5 Relación 2
#include <cmath>
#include <iostream>
using namespace std;

int main() {
   double valor_inicial;
   double valor_final;
   double variacion_porcentual;

   cout << "Calculo de la variacion porcentual entre dos numeros \n";
   cout << "Introduce el valor inicial: ";
   cin >> valor_inicial;

   while (valor_inicial > 0) {
      cout << "Introduce el valor final: ";
      cin >> valor_final;

      variacion_porcentual = abs(100 * ((valor_final - valor_inicial) / valor_inicial));

      cout << "La variacion porcentual es: " << variacion_porcentual << "%\n";
      cout << "Introduce el valor inicial: ";
      cin >> valor_inicial;
   }
}