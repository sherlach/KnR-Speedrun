#include <stdio.h>

/* verify EOF is 0 or 1 */

int main() {
  int c;
  c = (getchar() != EOF);
  printf("%d\n", c);
  return 0;
}
