// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 27 Semana 3 Relación 1

#include <iostream>
using namespace std;

int main() {
   int entero;
   char caracter;
   int base_numeros_ascii = (int)'0';

   cout << "Programa que convierte un carácter en un entero";
   cout << "\n Introduce un carácter numérico (cin de un char): ";
   cin >> caracter;

   entero = caracter - base_numeros_ascii;

   cout << "\n Tu número es " << entero << " (cout de un int) ";
}