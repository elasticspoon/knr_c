#include <stdio.h>
int main() {
  int c;
  int prev_space = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      prev_space++;
      if (prev_space > 1) {
        continue;
      }
    } else {
      prev_space = 0;
    }
    putchar(c);
  }
}
