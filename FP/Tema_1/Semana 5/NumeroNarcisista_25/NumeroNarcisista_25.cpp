// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 25 Semana 5 Relación 2
#include <cmath>
#include <iostream>
using namespace std;
int main() {
   int numero;
   int numero_digitos = 0;
   int cociente, resto, calculo = 0;

   cout << "Comprobador de numero narcisista";
   cout << "\nIntroduce un número para verificar si es narcisista: ";
   cin >> numero;

   cociente = numero;

   while (cociente > 0) {
      cociente = cociente / 10;
      numero_digitos++;
   }
   for (int i = 0; i < numero_digitos; i++) {
      resto = numero / pow(10, i);
      resto = resto % 10;
      calculo += pow(resto, numero_digitos);
   }

   cout << "Numero de digitos: " << numero_digitos;
   cout << "\nCalculo: " << calculo;

   if (calculo == numero)
      cout << "\nEs narcisista";
   else
      cout << "\nNo es narcisista";
}