#include <stdio.h>
int main() {
  int min = 0;
  int max = 300;
  int step = 20;

  // formula: C = 5/9 * (F - 32)
  printf("Farenheit\tCelsius\n");
  while (min <= max) {
    float c = ((min - 32) * 5.0) / 9.0;
    printf("%9d\t%7.2f\n", min, c);
    min += step;
  }
}
