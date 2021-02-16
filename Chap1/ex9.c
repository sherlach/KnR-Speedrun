#include <stdio.h>

/* copy input to output, avoiding duplicated blanks */

int main() {
  int c;
  int blank; /* are we in a whitespace string? */

  blank = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (!blank) {
        putchar(' ');
        blank = 1;
      }
    }

    else {
      putchar(c);
      blank = 0;
    }
  }
  return 0;
}
