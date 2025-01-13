#include <stdio.h>
int main() {
  // formula: C = 5/9 * (F - 32)
  printf("Farenheit\tCelsius\n");
  for (int f = 0; f <= 300; f += 20) {
    float c = ((f - 32) * 5.0) / 9.0;
    printf("%9d\t%7.2f\n", f, c);
  }
}
