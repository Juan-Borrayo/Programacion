#include <stdio.h>
#include <math.h>

  // 1. Función para convertir kilómetros a millas
  double km_to_miles(double km) {
      return km * 0.621371;
  }

  // 1. Función para convertir euros a dólares
  double euros_to_dollars(double euros) {
      return euros * 1.1; // Suponiendo que 1 euro = 1.1 dólares
  }

  // 2. Función para calcular el área del rectángulo
  double area_rectangulo(double base, double altura) {
      return base * altura;
  }

  // 3. Función para comparar dos números
  int relacion(int a, int b) {
      if (a > b) return 1;
      else if (a < b) return -1;
      else return 0;
  }

  // 4. Función para calcular el área y el perímetro de una circunferencia
  void area_perimetro_circunferencia(double radio) {
      double area = M_PI * radio * radio;
      double perimetro = 2 * M_PI * radio;
      printf("Área: %.2f\n", area);
      printf("Perímetro: %.2f\n", perimetro);
  }

  // 5. Función para convertir horas, minutos y segundos a segundos
  int tiempo_a_segundos(int horas, int minutos, int segundos) {
      return (horas * 3600) + (minutos * 60) + segundos;
  }

  // 5. Función para convertir segundos a horas, minutos y segundos
  void segundos_a_tiempo(int segundos) {
      int horas = segundos / 3600;
      segundos = segundos % 3600;
      int minutos = segundos / 60;
      segundos = segundos % 60;
      printf("Tiempo: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
  }

  // 6. Función para dibujar un rectángulo
  void dibujar(int ancho, int alto) {
      for (int i = 0; i < alto; i++) {
          for (int j = 0; j < ancho; j++) {
              printf("* ");
          }
          printf("\n");
      }
  }
int main() {
int opcion,ancho,alto;
double km, euros, base, altura, radio;
int a, b, horas, minutos, segundos;
    
do {
  printf("\nMenú de opciones:\n");
  printf("1. Convertir kilómetros a millas\n");       printf("2. Convertir euros a dólares\n");
  printf("3. Calcular área de un rectángulo\n");
  printf("4. Comparar dos números\n");
  printf("5. Calcular área y perímetro de una circunferencia\n");
  printf("6. Convertir tiempo (horas, minutos, segundos) a segundos\n");
  printf("7. Convertir segundos a tiempo (horas, minutos, segundos)\n");
  printf("8. Dibujar un rectángulo\n");
  printf("9. Salir\n");
  printf("Seleccione una opción: ");
  scanf("%d", &opcion);

  switch (opcion) {
  case 1:
    printf("Ingrese kilómetros: ");
    scanf("%lf", &km);
    printf("%.2f kilómetros equivalen a %.2f millas\n", km, km_to_miles(km));
    break;
  case 2:
    printf("Ingrese euros: ");
    scanf("%lf", &euros);
    printf("%.2f euros equivalen a %.2f dólares\n", euros, euros_to_dollars(euros));
    break;
  case 3:
    printf("Ingrese base y altura del rectángulo: ");
    scanf("%lf %lf", &base, &altura);
    printf("El área del rectángulo es: %.2f\n", area_rectangulo(base, altura));
    break;
  case 4:
    printf("Ingrese dos números para comparar: ");
    scanf("%d %d", &a, &b);
    int resultado = relacion(a, b);
    if (resultado == 1) {
      printf("El primer número es mayor.\n");
      } 
    else if (resultado == -1) {
      printf("El primer número es menor.\n");
      } 
    else {
      printf("Los números son iguales.\n");
      }
      break;
  case 5:
    printf("Ingrese el radio de la circunferencia: ");
    scanf("%lf", &radio);
    area_perimetro_circunferencia(radio);
    break;
  case 6:
    printf("Ingrese horas, minutos y segundos: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    printf("El tiempo en segundos es: %d\n", tiempo_a_segundos(horas, minutos, segundos));
    break;
  case 7:
    printf("Ingrese el tiempo en segundos: ");
    scanf("%d", &segundos);
    segundos_a_tiempo(segundos);
    break;
    case 8:
    printf("Ingrese la anchura y altura del rectángulo: ");
    scanf("%d %d", &ancho, &alto);
    dibujar(ancho, alto);
    break;
  case 9:
  printf("¡Hasta luego!\n");
  break;
  default:
    printf("Opción no válida, intente de nuevo.\n");
    break;
          }
} 
while (opcion != 9);

return 0;
}
