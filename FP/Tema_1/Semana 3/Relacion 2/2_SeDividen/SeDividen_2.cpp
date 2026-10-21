// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 2 Semana 3 Relación 2
#include <iostream>
using namespace std;

int main() {
   int a, b;

   cout << "Comprobador de división entera";
   cout << "\n Introduce dos números para comprobar si uno divide al otro (ejemplo: 5 10): ";
   cin >> a >> b;

   if (a % b == 0 || b % a == 0) {
      cout << "Uno de ellos divide al otro";
   } else {
      cout << "Ninguno divide al otro";
   }
}