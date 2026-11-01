// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 31 Semana 6

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int tope;
   int i;
   // (-1) ^ i
   int signo = -1;
   // Numerador = signo * numerador
   // numerador = (1/raiz(3)) ^ denominador
   // denominador= 2i+1
   double numerador_base, numerador_elev, denominador;
   double sumatoria = 0;
   numerador_base = 1 / sqrt(3);
   cout.precision(15);
   cout << "Aproximación de Pi de Madhava";

   do
   {
      cout << "\n Introduce el número de iteraciones: ";
      cin >> tope;
   } while (tope < 1 || tope > 100 * 1000);

   for (i = 0; i <= tope; i++)
   {
      signo = -signo;
      denominador = 2 * i + 1;
      numerador_elev = numerador_base;
      for (int j = 2; j <= denominador; j++)
      {
         numerador_elev *= numerador_base;
      }
      numerador_elev *= signo;
      sumatoria += numerador_elev / denominador;
   }

   cout << "\n Aproximacion: " << sumatoria * 6;
}