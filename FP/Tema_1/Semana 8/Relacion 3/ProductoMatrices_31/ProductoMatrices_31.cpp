// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 31 Semana 8 Relación 3
#include <iostream>
using namespace std;
int main() {
   int izda_filas, izda_column, dcha_filas, dcha_column;
   const int MAX_FIL = 10, MAX_COL = 10;
   int izda[MAX_FIL][MAX_COL] = {0}, dcha[MAX_FIL][MAX_COL] = {0}, producto[MAX_FIL][MAX_COL] = {0};

   cout << "\nIntroduce el número de filas y columnas de la primera matriz: ";
   cin >> izda_filas >> izda_column;

   for (int fila = 0; fila < izda_filas; fila++) {
      for (int column = 0; column < izda_column; column++) {
         cout << "Introduce izquierda [" << fila << "][" << column << "]: ";
         cin >> izda[fila][column];
      }
   }

   cout << "\nIntroduce el número de columnas de la segunda matriz: ";
   cin >> dcha_column;

   dcha_filas = izda_column;

   for (int fila = 0; fila < dcha_filas; fila++) {
      for (int column = 0; column < dcha_column; column++) {
         cout << "Introduce derecha [" << fila << "][" << column << "]: ";
         cin >> dcha[fila][column];
      }
   }

   /*
   multiplo[0][0] = izda[0][0] * dcha[0][0] + izda[0][1] * dcha[1][0]
   multiplo[0][1] = izda[0][0] * dcha[0][1] + izda[0][1] * dcha[1][1]
   multiplo[1][0] = izda[1][0] * dcha[0][0] + izda[1][1] * dcha[1][0]
   multiplo[1][1] = izda[1][0] * dcha[0][1] + izda[1][1] * dcha[1][1]


   */

   for (int fila = 0; fila < izda_filas; fila++) {
      for (int column = 0; column < dcha_column; column++) {
         for (int escalar = 0; escalar < izda_column; escalar++) {
            producto[fila][column] += (izda[fila][escalar] * dcha[escalar][column]);
         }
      }
   }

   cout << "Matriz Producto: ";
   // La recorro otra vez, aunque podría haber aprovechado el bucle anterior para mostrarlo.
   for (int fila = 0; fila < izda_filas; fila++) {
      cout << "\nFila " << fila << " :   ";
      for (int column = 0; column < dcha_column; column++) {
         cout << producto[fila][column] << "\t";
      }
   }
}