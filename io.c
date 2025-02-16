#include <stdio.h>
int main() {
  int c = 0;
  long nc = 0;
  double nc_d;
  /* printf("%d", EOF); */
  /* while ((c = getchar()) != EOF) { */
  /*   nc++; */
  /*   printf("char #%ld: '%c'\n", nc, c); */
  /* } */

  for (nc_d = 0; getchar() != EOF; nc_d++) {
  }
  printf("%.0f\n", nc_d);
}
