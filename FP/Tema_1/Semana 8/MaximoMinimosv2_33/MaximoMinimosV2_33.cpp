// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 33 Semana 8 Relación 3
#include <iostream>
using namespace std;

int main() {
   int filas, columnas;
   const int MAX_FIL = 10, MAX_COL = 10;
   int matriz[MAX_FIL][MAX_COL] = {0}, min_fila = {INT_MAX}, max_minimos = INT_MIN;

   int fil_max_min, col_max_min, col_min;

   cout << "Máximo de los mínimos.\n\nIntroduzca el número de filas y el número de columnas.\n";
   cin >> filas >> columnas;

   for (int fila = 0; fila < filas; fila++) {
      min_fila = {INT_MAX};
      for (int column = 0; column < columnas; column++) {
         cout << "Introduce valor [" << fila << "][" << column << "]: ";
         cin >> matriz[fila][column];

         if (matriz[fila][column] < min_fila) {
            min_fila = matriz[fila][column];
            col_min = column;
         }
      }

      if (min_fila > max_minimos) {
         max_minimos = min_fila;
         fil_max_min = fila;
         col_max_min = col_min;
      }
   }

   cout << "Máximo de los mínimos:\nFila: " << fil_max_min
        << "\nColumna: " << col_max_min << "\nValor: " << max_minimos << "\n";
}