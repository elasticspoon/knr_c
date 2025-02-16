#include <stdio.h>

int main() {
  int nl = 0;
  int nt = 0;
  int nb = 0;
  int c = 0;
  while ((c = getchar()) != EOF) {
    switch (c) {
    case '\n':
      nl++;
      break;
    case ' ':
      nb++;
      break;
    case '\t':
      nt++;
      break;
    }
  }

  printf("newlines: %d\ttabs: %d\tblanks: %d\n", nl, nt, nb);
}
