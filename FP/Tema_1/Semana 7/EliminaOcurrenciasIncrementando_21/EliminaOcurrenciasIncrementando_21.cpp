// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 21 Semana 7
#include <iostream>
using namespace std;

int main() {
   const char TERMINADOR = '#';
   const int TAMANO_MAX = 100;
   char vector[TAMANO_MAX], car, car_a_borrar;
   int pos_actual = 0, tamano_vector, despl = 0;

   cout << "Eliminar ocurrencias de una componente \n";
   cout << "\n Ejemplo: maaovaiala#a   Resultado: movil \n";
   cout << "Introduce el vector acabado en " << TERMINADOR << " y luego el caracter a borrar: ";

   do {
      car = cin.get();
      if (car != TERMINADOR) {
         vector[pos_actual] = car;
         pos_actual++;
      }
   } while (car != TERMINADOR && pos_actual < TAMANO_MAX);

   cin >> car_a_borrar;

   tamano_vector = pos_actual;

   for (int i = 0; i < tamano_vector; i++) {
      if (vector[i] == car_a_borrar) {
         despl++;
      } else {
         vector[i - despl] = vector[i];
      }
   }
   tamano_vector -= despl;

   if (tamano_vector > 0) {
      for (int i = 0; i < tamano_vector; i++) {
         cout << vector[i];
      }
   } else {
      cout << "Vector vacio";
   }
}