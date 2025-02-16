#include <stdio.h>

float farenheit_to_celcius(int f);

int main() {
  // formula: C = 5/9 * (F - 32)
  printf("Farenheit\tCelsius\n");
  for (int f = 0; f <= 300; f += 20) {
    float c = farenheit_to_celcius(f);
    printf("%9d\t%7.2f\n", f, c);
  }
}

float farenheit_to_celcius(int f) { return ((f - 32) * 5.0) / 9.0; }
