// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 24 Semana 5 Relación 2
#include <iostream>
using namespace std;

int main() {
   double capital;
   double interes;
   int años;
   double total;

   cout << "Calculadora de interes bancario anual";
   cout << "\n Introduzca el capital cuyo interes quieres calcular: ";
   cin >> capital;
   cout << "\n Introduzca el interes que se le aplica a dicho capital: ";
   cin >> interes;

   total = capital;

   for (int i = 1; total <= 2 * capital; i++) {
      total = total + ((total / 100) * interes);
      años = i;
   }

   cout << "Han de pasar " << años << " años hasta doblar la cantidad incial";
}