#include <stdio.h>

#define MAX_LEN 1000

int get_line(char line[], int max_len);
void copy(char target[], char line[]);

int main() {
  char line[MAX_LEN];
  char longest_line[MAX_LEN];
  int max_len = 0;
  int len = 0;

  while ((len = get_line(line, MAX_LEN)) > 0) {
    if (len > max_len) {
      copy(longest_line, line);
      max_len = len;
    }
  }

  printf("longest with %d chars: %s\n", max_len, longest_line);
}

int get_line(char target[], int max_len) {
  int i = 0;
  int c;
  for (; i < max_len - 1; i++) {
    c = getchar();
    if (c == '\n') {
      target[i] = c;
      i++;
    }
    if (c == EOF || c == '\n') {
      break;
    }
    target[i] = c;
  }
  target[i] = '\0';
  return i;
}

void copy(char target[], char line[]) {
  int i = 0;
  do {
    target[i] = line[i];
    i++;
  } while (target[i - 1] != '\0');
}
