#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_LEN 4

/* TODO:  */
/* - flip the histogram, the labels should be below */
/* - resize the array dynamically */

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
  int c, max_l, cons_chars, max_f;
  c = max_l = max_f = cons_chars = 0;
  int arr_l = 4;
  int *wl = (int *)calloc(arr_l, sizeof(int));
  if (wl == NULL) {
    exit(1);
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
      if (cons_chars > arr_l) {
        wl = resize(wl, arr_l);
        arr_l = arr_l * 2;
      }
      if (cons_chars > max_l) {
        max_l = cons_chars;
      }
    }
  }

  printf("Word Length Frequencies\n");
  for (int i = 1; i <= max_l; i++) {
    printf("%d\t", i);
  }
  printf("\n");
  for (int i = 1; i <= max_f; i++) {
    for (int len = 1; len <= max_l; len++) {
      if (wl[len] >= i) {
        printf("x\t");
      } else {
        printf(" \t");
      }
    }
    printf("\n");
  }
  free(wl);
}
