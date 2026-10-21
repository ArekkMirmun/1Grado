// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 23 Semana 2
// Calcula el índice de una letra mayúscula introducida por el usuario
// Usa el valor ASCII de 'A' como base para calcular el índice
#include <iostream>
using namespace std;

int main(){
    char letra;
    int indice_base = 'A';
    int indice;

    cout << "Introduce una letra mayúscula: ";
    cin >> letra;

    indice = letra - indice_base; // Se resta el valor ASCII de 'A' para obtener el índice

    cout << "El índice de la letra es: " << indice;
}