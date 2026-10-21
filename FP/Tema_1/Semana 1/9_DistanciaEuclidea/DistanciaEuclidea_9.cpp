// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programacion
// Ejercicio 9 Semana 1
// Ejercicio donde calcularemos la distancia euclidea entre dos puntos

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Definen punto 1
    double punto_1_x;
    double punto_1_y;

    //Definen punto 2
    double punto_2_x;
    double punto_2_y;
    
    double distancia_euclidea;

    // Variables auxiliares para el calculo de la distancia euclidea
    double computo_x;
    double computo_y;

    cout << "Calculo de la distancia euclidea entre dos puntos \n";
    cout << "Introduce la coordenada x del primer punto: ";
    cin >> punto_1_x;
    cout << "Introduce la coordenada y del primer punto: ";
    cin >> punto_1_y;
    cout << "Introduce la coordenada x del segundo punto: ";
    cin >> punto_2_x;
    cout << "Introduce la coordenada y del segundo punto: ";
    cin >> punto_2_y;

    // Lo calculamos así a peticion del enunciado.
    computo_x = punto_2_x - punto_1_x;
    computo_y = punto_2_y - punto_1_y;
    distancia_euclidea = sqrt(computo_x * computo_x + computo_y * computo_y);

    cout << "La distancia euclidea entre los dos puntos es: " << distancia_euclidea;
}
