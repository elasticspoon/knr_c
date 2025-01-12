#include <stdio.h>
int main() {
  int min = 0;
  int max = 300;
  int step = 20;

  // formula: C = 5/9 * (F - 32)
  while (min <= max) {
    int c = ((min - 32) * 5) / 9;
    printf("F: %d\tC: %d\n", min, c);
    min += step;
  }
}
