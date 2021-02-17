#include <stdio.h>

/* fahrenheit-celsius table, using a function */

#define LOWER 0
#define HIGHER 300
#define STEP 20

int ftoc(int fahr);

int main() {
  int fahr;

  for (fahr = LOWER; fahr <= HIGHER; fahr += STEP) {
    printf("%d\t%d\n", fahr, ftoc(fahr));
  }

  return 0;
}

int ftoc(int fahr) {
  return 5 * (fahr-32) / 9;
}
