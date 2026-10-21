// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 13 Semana 4 Relación 2
#include <iostream>
using namespace std;

int main() {
   int hora1, minuto1, segundo1;
   int hora2, minuto2, segundo2;
   bool misma_h, misma_h_m;
   bool prim_anterior;

   cout << "Calculadora de diferencia de tiempo entre dos instantes.";
   cout << "Introduce la primera hora (hh mm ss): ";
   cin >> hora1 >> minuto1 >> segundo1;
   cout << "Introduce la segunda hora (hh mm ss): ";
   cin >> hora2 >> minuto2 >> segundo2;

   misma_h = hora1 == hora2;
   misma_h_m = misma_h && minuto1 == minuto2;

   if (hora1 < hora2) {
      prim_anterior = true;
   } else if (misma_h && minuto1 < minuto2) {
      prim_anterior = true;
   } else if (misma_h_m && segundo1 < segundo2) {
      prim_anterior = true;
   } else {
      prim_anterior = false;
   }

   if (prim_anterior)
      cout << "El primero es anterior";
   else
      cout << "El primero no es anterior";
}