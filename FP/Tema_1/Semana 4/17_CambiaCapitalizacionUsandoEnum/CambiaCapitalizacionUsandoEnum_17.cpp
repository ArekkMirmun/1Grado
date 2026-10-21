// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 17 Semana 4 Relación 2
#include <iostream>
using namespace std;

enum TipoChar {
   may,
   min,
   no_alf
};

int main() {
   char letra_original, letra_convertida;
   TipoChar tipo_letra;
   const int DIFF_MAY_MIN = 'a' - 'A';

   cout << "Convertidor de letra mayúscula a minúscula y viceversa";
   cout << "\n Introduce una letra para convertirla: ";
   cin >> letra_original;

   if (letra_original >= 'A' && letra_original <= 'Z') {
      tipo_letra = TipoChar::may;
      letra_convertida = letra_original + DIFF_MAY_MIN;
   } else if (letra_original >= 'a' && letra_original <= 'z') {
      tipo_letra = TipoChar::min;
      letra_convertida = letra_original - DIFF_MAY_MIN;
   } else {
      tipo_letra = TipoChar::no_alf;
   }

   if (tipo_letra == TipoChar::may) {
      cout << "¡Letra mayúscula detectada!";
      cout << "\n La letra convertida es: " << letra_convertida;
   } else if (tipo_letra == TipoChar::min) {
      cout << "¡Letra minúscula detectada!";
      cout << "\n La letra convertida es: " << letra_convertida;
   } else {
      cout << "El carácter no era una letra";
   }
}