// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 23 Semana 5 Relación 2
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
   cout << "\n Introduzca el número de años a calcular: ";
   cin >> años;

   total = capital;

   for (int i = 1; i <= años; i++) {
      total = total + ((total / 100) * interes);
      cout << "\nEl total del capital compuesto con interes anual tras " << i << " año/s es de: " << total;
   }
}