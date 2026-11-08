// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 4 Semana 8 Relación 4
#include <iostream>
using namespace std;

int MinimoAniosParaObjetivo(double capital, double interes, double objetivo) {
   double total = capital;
   int anios = 0;
   while (total < objetivo) {
      total = total + ((total / 100) * interes);
      anios++;
   }
   return anios;
}

int main() {
   double capital;
   double interes;
   int aniosParaDoblar;

   cout << "Calculadora de interés bancario anual";
   cout << "\n Introduzca el capital cuyo interés quieres calcular: ";
   cin >> capital;
   cout << "\n Introduzca el interés que se le aplica a dicho capital: ";
   cin >> interes;

   aniosParaDoblar = MinimoAniosParaObjetivo(capital, interes, capital * 2);

   cout << "Deben de pasar " << aniosParaDoblar << " años para duplicar el capital";
}

/*
    Creo que es mejor una función que sea más reutilizable, es decir, que te permita poner el objetivo que tú quieras.
    Esto, por ejemplo, permitiría hacer una calculadora de interés compuesto, en la cual, como hacemos aquí,
    le introduces un capital base, el interés que se le aplica y cuánto dinero quieres tener, y te diga cuántos años
    tienen que transcurrir.
*/
