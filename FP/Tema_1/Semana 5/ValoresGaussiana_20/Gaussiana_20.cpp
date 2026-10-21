// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 20 Semana 5 Relación 2
#include <cmath>
#include <iostream>
using namespace std;

int main() {
   const double PI = 6 * asin(0.5);

   double esperanza, desviacion, minimo, maximo, incremento;
   double x, y;
   double tipificado, exponente;

   cout << "Gaussiana\n\nIntroduzca el valor del parámetro 'esperanza' : ";
   cin >> esperanza;

   do {
      cout << "Introduzca el valor del parámetro 'desviacion' : ";
      cin >> desviacion;
   } while (desviacion < 0);
   cout << "Introduzca el valor de minimo la abscisa: ";
   cin >> minimo;

   do {
      cout << "Introduzca el valor de maximo la abscisa: ";
      cin >> maximo;
   } while (maximo < minimo);
   do {
      cout << "Introduzca el valor del incremento entre valores de la abscisa: ";
      cin >> incremento;
   } while (incremento <= 0);
   cout << "\n";

   for (x = minimo; x <= maximo; x += incremento) {
      tipificado = (x - esperanza) / desviacion;
      exponente = -0.5 * tipificado * tipificado;

      y = exp(exponente) / (desviacion * sqrt(2 * PI));

      cout << "El valor de la función gaussiana en " << x << " es " << y << "\n";
   }
}