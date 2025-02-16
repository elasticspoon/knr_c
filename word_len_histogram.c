#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_LEN 4

/* TODO:  */
/* - flip the histogram, the labels should be below */

int *resize(int *arr, int curr) {
  int *new_arr = (int *)realloc(arr, curr * 2 * sizeof(int));
  if (new_arr == NULL) {
    free(arr);
    exit(1);
  }
  for (int i = curr; i < curr * 2; i++) {
    new_arr[i] = 0;
  }

  return new_arr;
}

int main() {
  int c, max_length, cons_chars, max_freq;
  c = max_length = max_freq = cons_chars = 0;
  int arr_l = 4;
  int *wl = (int *)calloc(arr_l, sizeof(int));
  if (wl == NULL) {
    exit(1);
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (cons_chars > 0) {
        wl[cons_chars]++;
        if (wl[cons_chars] > max_freq) {
          max_freq = wl[cons_chars];
        }
      }
      cons_chars = 0;
    } else {
      cons_chars++;
      if (cons_chars > arr_l) {
        wl = resize(wl, arr_l);
        arr_l = arr_l * 2;
      }
      if (cons_chars > max_length) {
        max_length = cons_chars;
      }
    }
  }

  printf("\nWord Length Frequencies\n");
  for (int i = max_freq; i >= 1; i--) {
    for (int len = 1; len <= max_length; len++) {
      if (wl[len] >= i) {
        printf("x\t");
      } else {
        printf(" \t");
      }
    }
    printf("\n");
  }
  for (int i = 1; i < max_length; i++) {
    printf("%d\t", i);
  }
  printf("%d\n", max_length);
  free(wl);
}
