// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programacion
// Ejercicio 8 Semana 1
// Ejercicio donde calcularemos un total dado un capital y un interes anual;

#include <iostream>
using namespace std;

int main(){
    double capital;
    double interes;
    double total;

    cout << "Calculadora de interes bancario anual";
    cout << "\n Introduzca el capital cuyo interes quieres calcular: ";
    cin >> capital;
    cout << "\n Introduzca el interes que se le aplica a dicho capital: ";
    cin >> interes;

    // La ventaja de expresarlo como total = .... y no como capital = ...
    // Es que facilita la lectura del programa.
    // La desventaja es que consume más memoria al tener que declarar una nueva variable.
    // capital = capital + (capital * interes / 100);

    total = capital + ((capital / 100) * interes);

    cout << "El total del capital con interes anual es de: " << total;
}