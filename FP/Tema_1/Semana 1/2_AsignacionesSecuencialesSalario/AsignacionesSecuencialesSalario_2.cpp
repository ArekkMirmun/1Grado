// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programacion
// Ejercicio 2 Semana 1

#include <iostream>
using namespace std;
/*
Responda razonadamente a la siguiente pregunta: ¿El hecho de realizar la asignación
salario_final = salario_base; hace que ambas variables estén ligadas durante todo el programa y que cualquier modificación posterior de salario_base afecte a
salario_final

Respuesta: No, al realizar dicha asignacion, lo que hacemos es asignar el balor que tiene
en ese momento salario_base a salario_final, no crea ningun enlace como tal.

Si modificamos por ejemplo la variable salario_base después de haber hecho la asignacion de antes,
no variara el resultado de salario_final.
*/
int main(){
    int salario_base;
    int salario_final;
    int incremento;

    salario_base = 1000;
    incremento = 200;

    salario_final = salario_base;
    salario_final = salario_final + incremento;

    salario_base = 3500;

    cout << "\nSalario base: " << salario_base;
    cout << "\nSalario final: " << salario_final;
}
