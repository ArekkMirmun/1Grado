// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 7 Semana 3 Relación 2
/*
En este ejercicio no hace falta construir ningún programa. Debe
crear un fichero de texto (con extensión cpp o txt) explicando qué problemas observa
en los siguientes condicionales:

1.
char tipo_radar;

cin >> tipo_radar;

if (tipo_radar == 'F' && tipo_radar == 'f')

RESPUESTA: Esta condición nunca va a cumplirse, ya que pide que sea F mayúscula y minúscula a la vez,
es decir, que un char tenga dos valores diferentes asignados, cosa que no es posible.
(Broma: a no ser que nuestro char sea cuántico...)
......


2.
double velocidad;

cin >> velocidad;

if (velocidad > 100 && velocidad < 70)

cout << "\nVelocidad fuera del rango";

RESPUESTA: Similar al anterior, pero en este caso con los rangos. La condición pide que
la velocidad sea MAYOR de 100 y MENOR de 70, por lo que nunca entrará en ese if.

3.
double velocidad;

cin >> velocidad;

if (velocidad > 100 || velocidad > 110)

cout << "Velocidad excesiva";

RESPUESTA: En este caso, sería innecesario el "velocidad > 110", ya que ya entraría en el bloque if si
"velocidad > 100", por lo que tenemos código innecesario.

*/