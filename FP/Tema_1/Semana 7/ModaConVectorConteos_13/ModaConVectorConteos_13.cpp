// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 13 Semana 7
#include <iostream>
using namespace std;

int main() {
   const char TERMINADOR = '#';
   const int NUM_MAX_CARACT = 256;
   // Inicializamos todos los valores del array a 0
   int conteos[NUM_MAX_CARACT] = {0};
   char car, moda;
   int frecuencia_moda = -1;

   // He decidido tomar este enfoque porque he pensado que, con casting, me ahorro
   // bastantes variables, y no hace falta declarar un vector absurdamente, si guardamos
   // en el índice i de cada carácter ASCII las veces que ha sido encontrado.
   // Además, podemos ir calculándolo conforme se van leyendo, y no hace falta recorrer el vector siquiera.

   cout << "Moda usando un vector de conteos.\n\n"
        << "Introduce caracteres con terminador " << TERMINADOR << "\n\n";
   // Rellenamos el vector texto usando cin.get:

   do {
      car = cin.get();

      if (car != TERMINADOR) {
         conteos[(int)car]++;
         if (conteos[(int)car] > frecuencia_moda) {
            moda = car;
            frecuencia_moda = conteos[(int)car];
         }
      }
   } while (car != TERMINADOR);

   cout << "\n\n";

   cout << "Moda :     " << moda << "\n"
        << "Frecuencia: " << frecuencia_moda;
}