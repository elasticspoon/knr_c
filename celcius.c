#include <stdio.h>

int main() {
  // formula: C = 5/9 * (F - 32)
  // formula: F = (C / 5) * 9 + 32
  printf("Celsius\tFarenheit\n");
  for (int c = 300; c >= 0; c -= 20) {
    float f = (c / 5.0) * 9.0 + 32.0;
    printf("%7d\t%9.1f\n", c, f);
  }
}
