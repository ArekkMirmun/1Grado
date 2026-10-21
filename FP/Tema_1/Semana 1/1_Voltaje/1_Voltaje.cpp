#include <iostream>
using namespace std;

// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programacion
// Ejercicio 1 Semana 1

int main(){
   double intensidad;
   double resistencia;
   double voltaje;

   cout << "Calculador de Voltaje \n";
   cout << "Introduce la resistencia: ";
   cin >> resistencia;
   cout << "\nIntroduce la intensidad:";
   cin >> intensidad;

   //Calculamos el voltaje
   voltaje = intensidad * resistencia;

   //Mostramos el calculo en pantalla
   cout << "\n El voltaje es: " << voltaje;
}