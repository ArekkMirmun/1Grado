// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 29 Semana 3 Relación 1

#include <iostream>
using namespace std;

int main() {
   char letra;
   bool es_minuscula;
   string enunciado1 =
    "1) Una expresión lógica que sea verdadera si una variable de tipo carácter llamada "
    "letra es una letra minúscula y falsa en otro caso.\n Hágalo sin usar las funciones "
       "islower, isupper de la biblioteca cctype.";

   cout << enunciado1 << "\n\n";
    cout << "Introduce una letra para verificar si es minúscula: ";
   cin >> letra;

   es_minuscula = 'a' <= letra && letra <= 'z';

    // Con condicionales quedaría mejor el mensaje, pero no están disponibles por el momento.
   //  En este caso, muestra 1 si es verdadero o 0 si es falso.
    cout << " 1 -> Sí es minúscula   0 -> No es minúscula \n";
    cout << "¿Es la siguiente letra minúscula: " << letra << "? " << es_minuscula;

   //------------------------------------------------------------------------------

   int edad;
   bool mayor_18_y_menor_65;
   string enunciado2 =
    "\n\n 2) Una expresión lógica que sea verdadera si una variable de tipo entero llamada edad "
    "es mayor o igual que 18 y menor o igual que 65, y falsa en otro caso.";

   cout << enunciado2;
    cout << "\nIntroduce una edad para saber si está entre 18 y 65 (ambos incluidos): ";
   cin >> edad;

   mayor_18_y_menor_65 = edad >= 18 && edad <= 65;

    cout << " 0 -> No está entre 18 y 65 \n 1 -> Sí está entre 18 y 65";
    cout << " \n\n¿Está entre 18 y 65? " << mayor_18_y_menor_65;

   //------------------------------------------------------------------------------

   int adivine;
   bool entre_1_y_100;
   string enunciado3 =
    "\n\n 3) Una expresión lógica que sea verdadera si una variable de tipo entero llamada adivine "
    "está entre 1 y 100 y falsa en otro caso.";

   cout << enunciado3;
    cout << "\n Programa que comprueba si tu número está entre 1 y 100 ";
   cout << "\n Introduce tu número: ";
   cin >> adivine;

    // Como no se especifica, asumo que 1 y 100 no están incluidos en el rango.
   entre_1_y_100 = adivine > 1 && adivine < 100;

    cout << "\n 0 -> No está entre 1 y 100 \n 1 -> Sí está entre 1 y 100\n";
    cout << "¿Está tu número entre 1 y 100? " << entre_1_y_100;

   //------------------------------------------------------------------------------

   int anio;
   bool es_bisiesto;
   string enunciado4 =
    "\n\n 4) Una expresión lógica que sea verdadera si un año es bisiesto y falsa en otro caso. "
       " Los años bisiestos son aquellos que o bien son divisibles por 4 pero no por 100, o"
       " bien son divisibles por 400. Por ejemplo, son bisiestos: 1600,1996, 2000, 2004."
       " No son bisiestos: 1700, 1800, 1900, 1998, 2002.";

   cout << enunciado4;
    cout << "\n Calculadora de años bisiestos";
   cout << "\n Introduce el año a verificar si es bisiesto: ";
   cin >> anio;

   es_bisiesto = anio % 4 == 0;

   cout << "\n 0-> no es bisiesto \n 1-> es bisiesto \n";
   cout << "¿ Es " << anio << " bisiesto? : " << es_bisiesto;

   //------------------------------------------------------------------------------

   int velocidad;
   int limite_de_velocidad = 100;
   bool encima_limite;
   string enunciado5 =
    "\n\n 5) Una expresión lógica que sea verdadera si un dato de velocidad es mayor o igual que "
    " 100 kilómetros por hora y falsa en otro caso.";

   cout << enunciado5;
    cout << "\n¿A qué velocidad vas?: ";
   cin >> velocidad;

   encima_limite = velocidad >= limite_de_velocidad;

    cout << "\n 0 -> Vas por debajo del límite de velocidad; puedes estar tranquilo.";
    cout << "\n 1 -> ¡Cuidado con el radar, vas por encima del límite!";
    cout << "\n ¿Vas demasiado rápido?: " << encima_limite;

   //------------------------------------------------------------------------------

   char vocal;
   bool es_vocal;
   string enunciado6 =
    "\n\n 6) Una expresión lógica que sea verdadera si un carácter es una vocal (solo se consideran "
    " vocales las minúsculas sin acentos) y falsa en otro caso.";

   cout << enunciado6;
   cout << "\nVerificadora de vocales";
    cout << "\n Introduce una letra para comprobar si es una vocal: ";
   cin >> vocal;

   es_vocal = vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u';

    cout << "\n 0 -> No es vocal \n 1 -> Sí es vocal \n";
    cout << "¿Es " << vocal << " una vocal?: " << es_vocal;

   //------------------------------------------------------------------------------

   int A, B, C;
   bool horizontal, vertical, esta_inclinada, es_valida;
   string enunciado7 =
    "\n\n 7) Una expresión lógica que sea verdadera si una recta está inclinada, es decir, que no "
       " sea ni horizontal ni vertical.\nSuponemos que una recta viene dada por tres coeficientes"
       " A, B, C (Ax + By + C = 0).\nEs horizontal si A = 0 y es vertical si B = 0."
       "\nAñada también una expresión lógica que sea verdadera si la recta está correctamente"
       " especificada, es decir, que no sean simultáneamente cero los coeficientes A y B.";

   cout << enunciado7;
   cout << "\n Introduce los valores de la recta Ax + By + C";
   cout << "\n Valor A: ";
   cin >> A;
   cout << "\n Valor B: ";
   cin >> B;
   cout << "\n Valor C: ";
   cin >> C;

   horizontal = A == 0;
   vertical = B == 0;
   esta_inclinada = !horizontal && !vertical;
   es_valida = !horizontal || !vertical;

    cout << "RESULTADOS \n 0 -> No   1 -> Sí \n";
    cout << "¿Está inclinada? " << esta_inclinada;
   cout << "\n ¿Es horizontal? " << horizontal << " ¿Y vertical? " << vertical;
    cout << "\n ¿Está correctamente especificada? " << es_valida;
}