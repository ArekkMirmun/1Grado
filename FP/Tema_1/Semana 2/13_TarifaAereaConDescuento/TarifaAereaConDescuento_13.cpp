// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 13 Semana 2

#include <iostream>
using namespace std;

int main() {
   double desc_puntos = 4;
   double desc_viaje_largo = 2;
   double precio_base;
   double precio_desc_puntos;
   double precio_desc_viaje_largo;

   cout << "Calculadora de Tarifa aérea con descuento\n";
   cout << "Introduce el precio del vuelo: ";
   cin >> precio_base;

   precio_desc_puntos = precio_base - ((precio_base / 100) * desc_puntos);
   precio_desc_viaje_largo = precio_base - ((precio_base / 100) * desc_viaje_largo);

   cout << "\nPrecio con descuento por puntos: " << precio_desc_puntos;
   cout << "\nPrecio con descuento por viaje largo: " << precio_desc_viaje_largo;
}