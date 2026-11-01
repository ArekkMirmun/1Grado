// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 5 Semana 7 Relación 3
#include <iostream>
using namespace std;
int main()
{
   const int TAMAÑO_ARRAY = 100;
   const char TERMINADOR = '#';
   char original[TAMAÑO_ARRAY], sustituto[TAMAÑO_ARRAY], modificado[TAMAÑO_ARRAY * TAMAÑO_ARRAY];
   char letra_a_sust, letra_org, letra_sust;
   int array_pos_org = 0, array_pos_sust = 0, array_pos_modf = 0;

   cout << "Introduce la cadena de caracteres original, "
        << "por lo que sustituiremos el termino, y el termino "
        << "separados por # en este formato: aaaaa#aaaa#a: \n";

   do
   {
      letra_org = cin.get();
      if (letra_org != TERMINADOR)
      {
         original[array_pos_org] = letra_org;
         array_pos_org++;
      }
   } while (letra_org != TERMINADOR);

   do
   {
      letra_sust = cin.get();
      if (letra_sust != TERMINADOR)
      {
         sustituto[array_pos_sust] = letra_sust;
         array_pos_sust++;
      }
   } while (letra_sust != TERMINADOR);
   cin >> letra_a_sust;

   for (int i = 0; i < array_pos_org; i++)
   {
      if (original[i] == letra_a_sust)
      {
         for (int j = 0; j < array_pos_sust; j++)
         {
            modificado[array_pos_modf] = sustituto[j];
            array_pos_modf++;
         }
      }
      else
      {
         modificado[array_pos_modf] = original[i];
         array_pos_modf++;
      }
   }

   cout << "Sustituida: ";
   for (int i = 0; i < array_pos_modf; i++)
   {
      cout << modificado[i];
   }
   cout << "\n";
}