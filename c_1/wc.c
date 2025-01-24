#include <stdio.h>

int main() {
  int c;
  int cons_chars = 0;
  int wc = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      cons_chars++;
      if (cons_chars > 1) {
        continue;
      }
    } else {
      cons_chars = 0;
    }
    putchar(c);
  }
}
