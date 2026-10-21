// Autor: Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 30 Semana 3 Relación 1
/*
Indique qué tipo de dato usaría para representar:

• Edad de una persona -> int

• Producto interior bruto de un país. -> Depende de cómo queramos almacenarlo

Podemos usar long long si queremos guardar hasta el último céntimo.
O, como suele expresarse en miles de millones, con un double nos bastaría.

Es decir, long long si:
    long long pibEspanaCentimos = 169001200000000;

double si:
    double pibEspanaMilesMillones = 1690.012;

También podríamos usar int si se midiese solo en millones:
    int pibEspanaMillones = 1690012;

• La cualidad de que un número entero sea primo o no. -> bool

• Estado civil (casado, soltero, separado, viudo) -> string o char (y almacenamos "Soltero" o 'S'). Sin restricciones,
usaríamos enum.

• Sexo de una persona (hombre o mujer exclusivamente) -> char (H, M), aunque, si solo son dos géneros, podríamos usar
un bool, ya que !hombre = mujer, pero esto no permite que añadamos otros géneros en el futuro.

*/