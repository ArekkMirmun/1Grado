// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 14 Semana 4 Relación 2
#include <iostream>
using namespace std;

int main() {
   double cota_izda, cota_dcha;
   char car_izda, car_dcha, car_coma;
   double numero;
   bool cumple_izda, cumple_dcha, esta_en_int;

   cout << "Introduzca el intervalo.\n";

   cin >> car_izda;
   cin >> cota_izda;
   cin >> car_coma;
   cin >> cota_dcha;
   cin >> car_dcha;
   cout << "\n";

   cout << "Introduce un valor para comprobar si está en el intervalo: ";
   cin >> numero;

   if (car_izda == '[') {
      cumple_izda = numero >= cota_izda;
   } else {
      cumple_izda = numero > cota_izda;
   }

   if (car_dcha == ']') {
      cumple_dcha = numero <= cota_dcha;
   } else {
      cumple_dcha = numero < cota_dcha;
   }

   esta_en_int = cumple_izda && cumple_dcha;

   cout << "\nEl valor " << numero << " ";

   if (!esta_en_int) cout << "no ";

   cout << "esta dentro del intervalo " << car_izda << cota_izda
        << car_coma << " " << cota_dcha << car_dcha;
}
