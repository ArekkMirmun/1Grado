// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 3 Semana 8 Relación 4
#include <iostream>
using namespace std;

int CalcularTotalConInteres(double capital, double interes, int anios) {
   double total = capital;
   for (int i = 1; i <= anios; i++) {
      total = total + ((total / 100) * interes);
   }
   return total;
}

int main() {
   double capital;
   double interes;
   double total;
   int anios;

   cout << "Calculadora de interés bancario anual";
   cout << "\n Introduzca el capital cuyo interés quieres calcular: ";
   cin >> capital;
   cout << "\n Introduzca el interés que se le aplica a dicho capital: ";
   cin >> interes;
   cout << "\n Introduce el número de años cuyo interés quieres calcular: ";
   cin >> anios;

   total = CalcularTotalConInteres(capital, interes, anios);

   cout << " Total calculado con interés para " << anios << " años: " << total;
}