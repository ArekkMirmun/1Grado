// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 11 Semana 4 Relación 2
#include <cctype>
#include <iostream>
using namespace std;

enum class Radar {
   fijo,
   movil
};

int main() {
   const int margen_velocidad = 100;
   const double margen_fijo = 5, margen_movil = 7;
   double vel_captada, vel_imputada;
   char tipoRadar;
   double margen;
   Radar radar;

   cout << "Calculadora de margen de error de radares\n";
   cout << "Introduce el tipo de radar: (F) Fijo, (M) Móvil: ";
   cin >> tipoRadar;
   cout << "\nIntroduce la velocidad captada: ";
   cin >> vel_captada;

   tipoRadar = toupper(tipoRadar);

   if (tipoRadar == 'F')
      radar = Radar::fijo;
   else
      radar = Radar::movil;

   if (radar == Radar::fijo) margen = margen_fijo;
   if (radar == Radar::movil) margen = margen_movil;

   if (vel_captada > margen_velocidad)
      vel_imputada = vel_captada - (vel_captada / 100) * margen;
   else
      vel_imputada = vel_captada - margen;

   cout << "\nVelocidad imputada: " << vel_imputada << " km/h";
}