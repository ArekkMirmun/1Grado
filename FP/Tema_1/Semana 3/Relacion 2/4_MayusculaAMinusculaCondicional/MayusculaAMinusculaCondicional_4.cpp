// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 4 Semana 3 Relación 2
#include <iostream>
using namespace std;

int main() {
   char letra_original, letra_convertida;
   bool es_letra_mayus;
   int diff_may_min = 'a' - 'A';

   cout << "Convertidor de letra mayúscula a minúscula";
   cout << "\n Introduce una letra mayúscula para convertirla: ";
   cin >> letra_original;

   es_letra_mayus = letra_original >= 'A' && letra_original <= 'Z';

   if (es_letra_mayus) {
      cout << "¡Letra mayúscula detectada!";
      letra_convertida = letra_original + diff_may_min;
      cout << "\n La letra convertida es: " << letra_convertida;

   } else {
      cout << " Letra mayúscula no detectada; se detiene el programa...";
      letra_convertida = letra_original;
   }
}