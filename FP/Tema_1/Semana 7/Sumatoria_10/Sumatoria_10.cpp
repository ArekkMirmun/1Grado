// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 10 Semana 7

#include <iostream>
using namespace std;

int main() {
   const int MAX_VALORES = 100;
   int num_valores, pos_encontrado = -1;
   int v[MAX_VALORES];
   long long suma, suma_a_buscar;
   bool encontrado = false;

   cout << "Encontrar sucesión de componentes que sumen un valor concreto.\n\n"
        << "Introduzca el número n de valores, los n valores y la suma a buscar\n";
   cin >> num_valores;

   for (int i = 0; i < num_valores; i++) {
      cin >> v[i];
   }

   cin >> suma_a_buscar;
   cout << "\n\n";

   for (int i = 0; i < num_valores && !encontrado; i++) {
      suma = 0;
      for (int j = i; j < num_valores && !encontrado; j++) {
         suma += v[j];
         if (suma == suma_a_buscar) {
            encontrado = true;
            pos_encontrado = i;
         }
      }
   }

   if (encontrado)
      cout << "Suma encontrada a partir de la posición " << pos_encontrado;
   else
      cout << "Suma no encontrada";
}
