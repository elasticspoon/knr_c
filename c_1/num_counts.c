#include <stdio.h>

int main() {
  int nw, n_other, c;
  nw = n_other = 0;
  int nd[10];

  for (int i = 0; i < 10; i++) {
    nd[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      nw++;
    } else if ('0' <= c && c <= '9') {
      nd[c - '0']++;
    } else {
      n_other++;
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("#%d: %d, ", i, nd[i]);
  }
  printf("whitespace: %d, other: %d\n", nw, n_other);
}
