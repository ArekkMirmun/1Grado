// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 41 Semana 6 Relación 2
#include <iostream>
using namespace std;

int main() {
   int id_alumno, id_mejor_alumno;
   double nota, iterac, nota_media, mejor_nota_media;

   cout << "Calculadora de mejor nota media\n\n";
   do {
      cout << "Introduce un Id de alumno para introducir sus notas (0 para cancelar): ";
      cin >> id_alumno;
      if (id_alumno != 0) {
         nota_media = 0;
         iterac = 0;
         do {
            cout << "\n Introduce notas del alumno (-1 para cancelar): ";
            cin >> nota;
            if (nota != -1) {
               nota_media += nota;
               iterac++;
            }

         } while (nota != -1);
         nota_media = nota_media / iterac;

         if (nota_media > mejor_nota_media) {
            mejor_nota_media = nota_media;
            id_mejor_alumno = id_alumno;
         }
      }
   } while (id_alumno != 0);

   cout << "Mejor alumno: " << id_mejor_alumno;
   cout << "\n Nota media: " << mejor_nota_media;
}