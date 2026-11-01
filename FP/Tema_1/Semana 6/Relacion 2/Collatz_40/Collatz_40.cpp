// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 40 Semana 6 Relación 2
#include <iostream>
using namespace std;

int main() {
   int inter_min, inter_max, n, num_mayor_orbita = 0, orbita = 0;
   cout << "Calculadora de la sucesión de Collatz\n\n";

   cout << "Introduce los valores del intervalo (Ej: 1 2) a calcular: ";
   cin >> inter_min >> inter_max;

   for (int i = inter_min; i <= inter_max; i++) {
      n = i;
      int iteraciones = 0;
      cout << "\nCalculando órbita para " << i << "\n";
      while (n != 1) {
         n % 2 == 0 ? n = n / 2 : n = n * 3 + 1;
         cout << n << " ";
         iteraciones++;
      }
      if (iteraciones > orbita) {
         num_mayor_orbita = i;
         orbita = iteraciones;
      }
   }

   cout << "Número con mayor órbita: " << num_mayor_orbita;
   cout << "\n Órbita: " << orbita;
}