// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 5 Semana 3 Relación 2
#include <iostream>
using namespace std;

int main() {
   double tarif_base = 150;
   double km_a_destino;
   double euros_por_km = 0.1;
   double tarif_total;
   int min_km_desc = 300;

   cout << "Calculadora de tarifa aérea \n";
   cout << "Introduce el número de kilómetros a destino: ";
   cin >> km_a_destino;

   tarif_total = tarif_base;

   if (km_a_destino > min_km_desc)
      tarif_total = tarif_total + ((km_a_destino - min_km_desc) * euros_por_km);

   cout << "La tarifa aérea es de " << tarif_total << "€";
}