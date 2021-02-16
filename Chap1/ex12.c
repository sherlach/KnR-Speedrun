#include <stdio.h>

int main() {
  int c;
  int prevspace; /* was the previous character whitespace? */

  prevspace = 0;

  while ((c=getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (!prevspace)
        putchar('\n');
      prevspace = 1;
    }

    else {
      putchar(c);
      prevspace = 0;
    }
  }

  return 0;
}
