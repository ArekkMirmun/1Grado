// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 17 Semana 7
#include <cmath>
#include <iostream>
using namespace std;

// He preferido hacer el menor entero directamente, ya que es un ejercicio también opcional, pues lo hago y ya.
int main() {
   const int TERMINADOR = -1;
   const int TAMANO_MAX = 10;
   int tamano_vector, k, numero, menor_vector, menor = 0;
   // Como solo usamos números del 1 al 9, podemos crear un vector donde cada número del vector representa el conteo
   // de las entradas del número en esa posición, y así no hace falta estar modificando tamaños de vectores.
   // numeros[2] = veces que ha aparecido 2
   int numeros[TAMANO_MAX] = {0};

   cout << "Menor entero\n";
   cout << "Introduce el número de elementos del vector: ";
   cin >> tamano_vector;
   cout << "\nIntroduce los números enteros del 1-9 del vector separados por espacios: ";

   for (int i = 0; i < tamano_vector; i++) {
      cin >> numero;
      numeros[numero]++;
   }

   do {
      cout << "\nIntroduce k para calcular el entero menor de k cifras (k menor que el tamaño del vector): ";
      cin >> k;
   } while (k > tamano_vector);

   for (int i = 0; i < k; i++) {
      bool menor_encontrado = false;
      // Recorremos el vector desde el primero hasta el último, viendo qué números quedan.
      // Al estar ordenado, solo tenemos que recorrerlo hasta encontrar alguno que tenga.
      for (int j = 0; j < TAMANO_MAX && !menor_encontrado; j++) {
         if (numeros[j] > 0) {
            menor_vector = j;
            numeros[j]--;
            menor_encontrado = true;
         }
      }
      menor = menor + menor_vector * pow(10, k - i - 1);
   }
   cout << "El menor entero con los parametros dados es: " << menor;
}