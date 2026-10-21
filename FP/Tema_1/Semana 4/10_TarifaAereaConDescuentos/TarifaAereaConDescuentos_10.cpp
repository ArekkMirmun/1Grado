// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 10 Semana 4 Relación 2
#include <iostream>
using namespace std;

int main() {
   const double euros_por_km_extr = 0.1;
   const int min_km_extr = 300;
   const int min_km_desc = 700;
   const int min_desc_pts_1 = 100, min_desc_pts_2 = 200;
   const double desc_km = 2, desc_pts_1 = 3, desc_pts_2 = 4;
   const double tarif_base = 150;
   double tarif_total;
   double km_a_destino;
   int puntos;

   double desc_calc = 0;

   cout << "Calculadora de tarifa aérea \n";
   cout << "Introduce el número de kilómetros a destino: ";
   cin >> km_a_destino;
   cout << "\nIntroduce el número de puntos: ";
   cin >> puntos;

   tarif_total = tarif_base;

   // Calculamos el descuento
   if (km_a_destino > min_km_desc) desc_calc += desc_km;

   if (puntos > min_desc_pts_2)
      desc_calc += desc_pts_2;
   else if (puntos > min_desc_pts_1)
      desc_calc += desc_pts_1;

   // Añadimos primero el recargo por más de 300 kilometros (10 cents por km extra)

   if (km_a_destino > min_km_extr)
      tarif_total = tarif_total + ((km_a_destino - min_km_extr) * euros_por_km_extr);

   // Aplicamos el descuento
   if (desc_calc > 0) {
      cout << "Descuento calculado: " << desc_calc << "%\n";
      tarif_total = tarif_total - (tarif_total / 100) * desc_calc;
   }

   cout << "La tarifa aérea es de " << tarif_total << "€";
}