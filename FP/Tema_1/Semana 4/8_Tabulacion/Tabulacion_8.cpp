// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 8 Semana 4 Relación 2
int main() {
   const int MAX_INGRESOS = 200000;
   const int MIN_INGRESOS = 50000;
   int edad, ingresos;
   bool es_mayor_edad, suscept_ayuda;

   // Trozo A)
   if (edad > 18)
      es_mayor_edad = true;
   else
      es_mayor_edad = false;

   // Trozo B
   if (edad > 18)
      if (ingresos <= MAX_INGRESOS)
         suscept_ayuda = true;
      else
         suscept_ayuda = false;
   else if (ingresos > MIN_INGRESOS)
      suscept_ayuda = true;
   else
      suscept_ayuda = false;
}