// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 1 Semana 6 Relación 3
#include <iostream>
using namespace std;

int main() {
   int entero, ultimo_dvsor, dvsor, array_pos = 0;
   int divisores[1024];

   cout << "Divisores de un entero\n\n";

   do {
      cout << "Introduce un número entero mayor estricto que 0: ";
      cin >> entero;
   } while (entero <= 0);

   cout << "\n";

   dvsor = 2;
   ultimo_dvsor = entero / 2;

   cout << "Divisores de " << entero << ": ";

   while (dvsor <= ultimo_dvsor) {
      if (entero % dvsor == 0) {
         divisores[array_pos] = dvsor;
         array_pos++;
      }

      dvsor++;
   }

   for (int i = 0; i < array_pos; i++) {
      cout << divisores[i] << " ";
   }
}
