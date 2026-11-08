// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 6 Semana 8 Relación 4
#include <cmath>
#include <iostream>
using namespace std;

// Es mejor esta versión en comparación con la que usa directamente 1000 iteraciones. Permite elegir cuántas
// iteraciones quieres usar, ahorrando cómputo, y sabiendo que, a partir de x iteraciones, sería inservible,
// debido al límite de precisión del double.
double aproximacionPiporTope(int tope) {
   int i;
   int signo = -1;
   double numerador_base, numerador_elev, denominador;
   double sumatoria = 0;

   numerador_base = 1 / sqrt(3);

   for (i = 0; i <= tope; i++) {
      signo = -signo;
      denominador = 2 * i + 1;
      numerador_elev = numerador_base;
      for (int j = 2; j <= denominador; j++) {
         numerador_elev *= numerador_base;
      }
      numerador_elev *= signo;
      sumatoria += numerador_elev / denominador;
   }

   return sumatoria * 6;
}

double aproximacionPi() {
   int i;
   int signo = -1;
   double numerador_base, numerador_elev, denominador;
   double sumatoria = 0;

   numerador_base = 1 / sqrt(3);

   for (i = 0; i <= 1000; i++) {
      signo = -signo;
      denominador = 2 * i + 1;
      numerador_elev = numerador_base;
      for (int j = 2; j <= denominador; j++) {
         numerador_elev *= numerador_base;
      }
      numerador_elev *= signo;
      sumatoria += numerador_elev / denominador;
   }

   return sumatoria * 6;
}

int main() {
   const int TOPE_MAX = 100 * 1000;
   int tope;
   double pi_1, pi_2;

   cout.precision(15);

   cout << "Aproximación de Pi de Madhava";

   do {
      cout << "\n Introduce el número de iteraciones: ";
      cin >> tope;
   } while (tope < 1 || tope > TOPE_MAX);

   pi_1 = aproximacionPiporTope(tope);
   pi_2 = aproximacionPi();

   cout << "\n Aproximación por Tope: " << pi_1;
   cout << "\n Aproximación por 1000 Iteraciones: " << pi_2;
}