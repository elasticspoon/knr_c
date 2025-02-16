#include <stdio.h>

int main() {
  int c_int, p_int, count_int;
  c_int = 1;
  p_int = 0;
  count_int = 0;
  while (c_int > p_int) {
    p_int = c_int;
    c_int = c_int << 1;
    count_int++;
  }
  printf("Max int: 2^%d\n", count_int);

  long c_long, p_long, count_long;
  c_long = 1;
  p_long = 0;
  count_long = 0;
  while (c_long > p_long) {
    p_long = c_long;
    c_long = c_long << 1;
    count_long++;
  }
  printf("Max long: 2^%ld\n", count_long);
}
