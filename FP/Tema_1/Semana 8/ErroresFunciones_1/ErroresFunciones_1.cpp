// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 1 Semana 8 Relación 4
#include <iostream>
using namespace std;

// Falta pasarle la variable a la función.
int Sumale1() {
   return entero + 1;
}

// Arreglado

int Sumale1(int entero) {
   return entero + 1;
}

// Falta el return
int Sumale1(int entero) {
   entero = entero + 1;
}

// Arreglado
int Sumale1(int entero) {
   entero = entero + 1;
   return entero;
}

// Sobra el else; podríamos dejar el if para los números negativos y el return para todos los casos.
int ValorAbsoluto(int entero) {
   if (entero < 0)
      entero = -entero;
   else
      return entero;
}

// Arreglado
int ValorAbsoluto(int entero) {
   if (entero < 0)
      entero = -entero;

   return entero;
}

// Solo devuelve valor en caso de que sea positivo. Queremos que nos diga también si NO es positivo.
bool EsPositivo(int valor) {
   if (valor > 0)
      return true;
}
// Arreglado
bool EsPositivo(int valor) {
   return valor > 0;
}

// Error en el tipo de objeto con el que trabajamos long =/= int
long ParteEntera(double real) {
   int parte_entera;
   parte_entera = trunc(real);
   return parte_entera;
}

// Arreglado

long ParteEntera(double real) {
   long parte_entera;
   parte_entera = trunc(real);
   return parte_entera;
}

// Considere ahora la siguiente función y la llamada en el programa principal

int Sumale1(int entero) {
   return entero + 1;
}

int main() {
   int n = 5;
   Sumale1(n);
   cout << n;
}
/*
El programa compila, pero imprime en pantalla 5 en vez de 6. ¿Por qué? ¿Qué solución
propone?

Solución: El problema se debe a que no estamos guardando la variable una vez sumado 1, por eso muestra 5 en vez de 6
*/

// Arreglado
int main() {
   int n = 5;
   n = Sumale1(n);
   cout << n;
}