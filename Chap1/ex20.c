#include <stdio.h>

/* detab program */

#define TABSTOP 8

int main() {
  int c, i, j;

  for (j = 0; ((c = getchar()) != EOF); j++) {
    switch (c) {
      case '\t':
        for (i = 0; i < (TABSTOP-(j % TABSTOP)); i++){
          putchar(' ');
        }
        j = -1;
        break;
      case '\n':
        j = -1;
      default:
        putchar(c);
        break;
    }
  }
  return 0;
}
