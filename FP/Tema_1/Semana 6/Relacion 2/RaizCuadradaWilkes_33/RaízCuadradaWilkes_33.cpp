// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 33 Semana 6 Relación 2
#include <cmath>
#include <iostream>
using namespace std;
int main() {
   double r, a, c, raiz_sqrt, raiz_wilkes;
   int iteraciones = 0;
   const double EPSILON = 1e-15;

   cout << "Aproximación de la raíz cuadrada por Wilkes\n";
   do {
      cout << "Introduzca un real en el intervalo (0,3): ";
      cin >> r;
   } while (r <= 0 || r >= 3);

   a = r;
   c = r - 1;

   while (abs(c) > EPSILON) {
      a = a - a * c / 2;
      c = (c * c) * (c - 3) / 4;
      iteraciones++;
   }

   raiz_sqrt = sqrt(r);
   raiz_wilkes = a;

   cout.precision(15);
   cout << "\n Raíz cuadrada de " << r << " calculada con sqrt: " << raiz_sqrt;
   cout << "\n Raíz cuadrada de " << r << " calculada con Wilkes (aprox): " << raiz_wilkes;
   cout << "\n Número de iteraciones " << iteraciones;
}