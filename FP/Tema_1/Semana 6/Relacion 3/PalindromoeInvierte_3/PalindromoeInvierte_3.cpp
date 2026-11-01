// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 3 Semana 6 Relación 3
#include <iostream>
using namespace std;

int main() {
   const int TAMAÑO_VECTOR = 100;
   char caracteres[TAMAÑO_VECTOR];
   char caracteres_invert[TAMAÑO_VECTOR];
   int array_pos = 0;
   char letra, letra_ini, letra_fin, letra_parar = '#';
   bool es_palindr = true;

   cout << "Introduce una cadena de caracteres terminada en #: ";
   do {
      letra = cin.get();
      if (letra != letra_parar) {
         caracteres[array_pos] = letra;
         array_pos++;
      }
   } while (letra != letra_parar && array_pos < 100);

   // Invertimos el array y lo guardamos en la copia invertida.
   for (int i = array_pos - 1; i >= 0; i--) {
      caracteres_invert[array_pos - i - 1] = caracteres[i];
   }

   // Comprobamos si es palíndromo
   for (int i = 0; i < array_pos && es_palindr; i++) {
      if (caracteres[i] != caracteres_invert[i]) es_palindr = false;
   }

   if (es_palindr)
      cout << "Es palíndromo\n";
   else {
      cout << "No es palíndromo\n";
      cout << "Secuencia invertida: ";
      for (int i = 0; i < array_pos; i++) {
         cout << caracteres_invert[i];
      }
   }
}