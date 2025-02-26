#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

int main() {
  int c, nl, nw, nc, state;
  state = OUT;

  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    nc++;
    if (c == '\n') {
      nl++;
    }
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
    } else if (state == OUT) {
      nw++;
      state = IN;
    }
  }
  printf("words: %d\t lines: %d\tchars: %d\n", nw, nl, nc);
}
