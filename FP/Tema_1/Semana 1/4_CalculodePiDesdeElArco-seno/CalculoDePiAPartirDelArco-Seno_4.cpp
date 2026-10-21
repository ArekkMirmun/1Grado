// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programacion
// Ejercicio 4 Semana 1
// Ejercicio donde calcularemos el valor de pi a partir del arco seno de 0.5

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double pi = asin(0.5) * 6;
   cout << "El valor de pi es: " << pi;
}