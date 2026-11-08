// Alejandro Miranda Muñoz
// Asignatura: Fundamentos de programación
// Ejercicio 7 Semana 8 Relación 4
#include <cmath>
#include <iostream>

using namespace std;

// Calcula base elevado a exponente
double PotenciaEntera(double base, int exponente) {
   double potencia;
   int exponente_positivo;

   if (base == 0 && exponente == 0)
      potencia = NAN;  // Devuelve NAN (Indeterminación)
   else {
      exponente_positivo = abs(exponente);
      potencia = 1;

      for (int i = 1; i <= exponente_positivo; i++)
         potencia = potencia * base;
   }

   if (exponente < 0)
      potencia = 1 / potencia;

   return potencia;
}

// Redondea real, dejando tantas cifras decimales como diga num_decimales
double Redondea(double real, int num_decimales) {
   double real_redondeado;
   long long desplazamiento;

   desplazamiento = PotenciaEntera(10, num_decimales);
   real_redondeado = round(real * desplazamiento);
   real_redondeado = real_redondeado / desplazamiento;

   return real_redondeado;
}

int main() {
   double real, redond;
   int num_decimales;
   string cadena;

   cout << "Redondeo a un número de decimales.\n\n"
        << "Introduzca un real y el número de decimales a redondear\n\n";

   cin >> real;
   cin >> num_decimales;

   redond = Redondea(real, num_decimales);

   cout << "Redondeado: " << redond << "\n";
}