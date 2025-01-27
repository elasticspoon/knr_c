#include <stdio.h>

int main() {
  int c;
  int cons_chars = 0;
  int wc = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (cons_chars >= 1) {
        wc++;
      }
      cons_chars = 0;
    } else {
      cons_chars++;
    }
  }
  if (cons_chars > 1) {
    wc++;
  }

  printf("word count: %d\n", wc);
}
