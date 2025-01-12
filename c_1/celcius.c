#include <stdio.h>

int main() {
  int min = 0;
  int max = 300;
  int step = 20;

  // formula: C = 5/9 * (F - 32)
  // formula: F = (C / 5) * 9 + 32
  printf("Celsius\tFarenheit\n");
  while (min <= max) {
    float f = (min / 5.0) * 9.0 + 32.0;
    printf("%7d\t%9.1f\n", min, f);
    min += step;
  }
}
