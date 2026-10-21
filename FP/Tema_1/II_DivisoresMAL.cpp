//////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Juan Carlos Cubero
//
//////////////////////////////////////////////////////////////////////////

// Divisores de un número

/*
Realice un programa que lea desde teclado un entero tope e imprima en
pantalla todos sus divisores propios.
Para obtener los divisores, basta recorrer todos los enteros menores que
el valor introducido y comprobar si lo dividen. A continuación, mejorar el
ejercicio obligando al usuario a introducir un entero positivo,
usando un filtro con un bucle post test ( do while ).

Somos conscientes de que mezclamos C/S pero por ahora
no tenemos herramientas   (serán los vectores) para separarlos
*/

#include <iostream>
using namespace std;

int main() {
   int entero, ultimo_divisor_posible, divisor;

   cout << "Divisores de un entero\n\n";

   do {
      cout << "Introduce un numero entero mayor estricto que 0: ";
      cin >> entero;
   } while (entero <= 0);

   cout << "\n";

   divisor = 2;
   ultimo_divisor_posible = entero / 2;

   cout << "Divisores de " << entero << ":\n\n";

   while (divisor <= ultimo_divisor_posible) {
      if (entero % divisor == 0)
         cout << divisor << " ";

      divisor++;
   }
}
