// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 2 Semana 6 Relación 3
#include <iostream>
using namespace std;
int main() {
   int min, max, k, num_divs, array_pos = 0;
   int divisores[1024];

   cout << "Introduce el rango mínimo del intervalo: ";
   cin >> min;

   do {
      cout << "\nIntroduce el rango máximo del intervalo: ";
      cin >> max;
   } while (max < min);

   do {
      cout << "\nIntroduce el mínimo de divisores a buscar en los números del rango: ";
      cin >> k;
   } while (k < 1);

   // Iteramos desde el rango mínimo al máximo
   for (int i = min; i <= max; i++) {
      num_divs = 0;
      // Comprobamos sus divisores, desde 2, hasta j/2
      for (int j = 2; j <= i / 2; j++) {
         if (i % j == 0) {
            // Si es divisor, incrementamos { num_divs } para ver si { i } lleva a los { k } divisores
            num_divs++;
         }
      }
      // Si llega a ser k-divisible, lo añadimos al array e incrementamos.
      if (num_divs >= k) {
         divisores[array_pos] = i;
         array_pos++;
      }
   }

   cout << "\nNúmeros entre " << min << " y " << max << " con " << k << " divisores: \n";

   for (int i = 0; i < array_pos; i++) {
      cout << divisores[i] << " ";
   }
}