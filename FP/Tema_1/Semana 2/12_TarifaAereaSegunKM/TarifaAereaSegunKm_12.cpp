// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 12 Semana 2

#include <iostream>
using namespace std;

int main(){
   double tarif_base = 150;
   double km_a_destino;
   double euros_por_km = 0.1;
   double tarif_total;

   cout << "Calculadora de tarifa aérea \n";
   cout << "Introduce el número de kilómetros a destino: ";
   cin >> km_a_destino;
   
   tarif_total = tarif_base + (km_a_destino * euros_por_km);

   cout << "La tarifa aérea es de " << tarif_total << "€";
}