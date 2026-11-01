// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 16 Semana 7
#include <iostream>
using namespace std;

int main() {
   const char TERMINADOR = '#';
   const int TAMANO_MAX = 100;
   char grande[TAMANO_MAX], peque[TAMANO_MAX], car;
   int tamn_grande = 0, tamn_peque = 0, inicio_busq = 0;
   bool char_encontrados = false;

   cout << "Comprobador contiene debil \n";
   cout << "Introduce una secuencia grande y otra peque delimitadas por " << TERMINADOR;
   cout << "\n Ejemplo: destino#si#  Resultado: Si lo contiene\n";
   do {
      car = cin.get();

      if (car != TERMINADOR) {
         grande[tamn_grande] = car;
         tamn_grande++;
      }
   } while (car != TERMINADOR && tamn_grande < TAMANO_MAX);

   do {
      car = cin.get();

      if (car != TERMINADOR) {
         peque[tamn_peque] = car;
         tamn_peque++;
      }
   } while (car != TERMINADOR && tamn_peque < TAMANO_MAX);

   for (int i = 0; i < tamn_peque; i++) {
      char_encontrados = false;
      for (int j = inicio_busq; j < tamn_grande && !char_encontrados; j++) {
         if (grande[j] == peque[i]) {
            // Si encuentra un caracter, para el proximo, empieza a buscar a partir de esa posicion.
            // Asi nos aseguramos encontrarlos en orden.
            char_encontrados = true;
            inicio_busq = j + 1;
         }
      }
   }

   if (char_encontrados) {
      cout << "Si lo contiene";
   } else {
      cout << "No lo contiene";
   }
}