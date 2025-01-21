#include <stdio.h>

int main() {
  int nn = 0;
  int c = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      nn++;
    }
  }

  printf("%d newlines\n", nn);
}
