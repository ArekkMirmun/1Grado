// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 8 Semana 8 Relación 4
#include <cmath>
#include <iostream>
using namespace std;

int Digitos(int numero) {
   int cociente = numero;
   int numero_digitos = 0;

   while (cociente > 0) {
      cociente = cociente / 10;
      numero_digitos++;
   }
   return numero_digitos;
}
bool EsNarcisista(int numero) {
   int numero_digitos = Digitos(numero);
   int resto, calculo = 0;

   for (int i = 0; i < numero_digitos; i++) {
      resto = numero / pow(10, i);
      resto = resto % 10;
      calculo += pow(resto, numero_digitos);
   }
   return calculo == numero;
}

int main() {
   int numero;
   bool es_narcisista;

   cout << "Comprobador de número narcisista";
   cout << "\nIntroduce un número para verificar si es narcisista: ";
   cin >> numero;

   es_narcisista = EsNarcisista(numero);

   if (es_narcisista)
      cout << "\nEs narcisista";
   else
      cout << "\nNo es narcisista";
}
