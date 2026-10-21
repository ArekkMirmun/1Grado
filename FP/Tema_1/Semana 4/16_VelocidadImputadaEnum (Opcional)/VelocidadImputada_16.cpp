// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 11 Semana 4 Relación 2
#include <cctype>
#include <iostream>
using namespace std;
// Aprovecho que ya lo tenia hecho con enum
enum class Radar {
   fijo,
   movil,
   tramo
};

int main() {
   const int margen_velocidad = 100;
   const double margen_fijo = 5, margen_movil = 7, margen_tramo = 3;
   double vel_captada, vel_imputada;
   char tipoRadar;
   double margen;
   Radar radar;

   cout << "Calculadora de margen de error de radares\n";
   cout << "Introduce el tipo de radar: (F) Fijo, (M) Móvil, (T) Tramo: ";
   cin >> tipoRadar;
   cout << "Introduce la velocidad captada: ";
   cin >> vel_captada;

   tipoRadar = toupper(tipoRadar);

   if (tipoRadar == 'F')
      radar = Radar::fijo;
   else if (tipoRadar == 'M')
      radar = Radar::movil;
   else if (tipoRadar == 'T')
      radar = Radar::tramo;
   else {
      cout << "\nTipo de radar no detectado, usando radar movil como predeterminado";
      radar = Radar::movil;
   }

   if (radar == Radar::fijo) margen = margen_fijo;
   if (radar == Radar::movil) margen = margen_movil;
   if (radar == Radar::tramo) margen = margen_tramo;

   if (vel_captada > margen_velocidad)
      vel_imputada = vel_captada - (vel_captada / 100.0) * margen;
   else
      vel_imputada = vel_captada - margen;

   cout << "\nVelocidad imputada: " << vel_imputada << " km/h";
}