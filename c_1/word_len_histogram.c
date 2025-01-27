#include <stdio.h>

#define MAX_WORD_LEN 10

int main() {
  int wl[MAX_WORD_LEN];
  int c, max_l, cons_chars, max_f;
  c = max_l = max_f = cons_chars = 0;

  for (int i = 0; i < MAX_WORD_LEN; i++) {
    wl[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (cons_chars > 0) {
        wl[cons_chars]++;
        if (wl[cons_chars] > max_f) {
          max_f = wl[cons_chars];
        }
      }
      cons_chars = 0;
    } else {
      cons_chars++;
      if (cons_chars > max_l) {
        max_l = cons_chars;
      }
    }
  }

  printf("Word Length Frequencies\n");
  for (int i = 1; i <= max_l; i++) {
    printf("%d ", i);
  }
  printf("\n");
  for (int i = 1; i <= max_f; i++) {
    for (int len = 1; len <= max_l; len++) {
      if (wl[len] >= i) {
        printf("x ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
}
