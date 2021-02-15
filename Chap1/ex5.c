#include <stdio.h>

void main() {
  int fahr, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = upper;
  while (fahr >= lower) {
    cels= 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, cels);
    fahr -= step;
  }
}
