#include <stdio.h> 

/* entab */

#define TABSTOP 8

int main() {
  int c, i;
  int n; // number of blank spaces

  for (n = 0; (c=getchar()) != EOF;) {
    switch (c) {
      case ' ':
        n++;
        break;
      default:
        for (i = 0; i < n; i++) { 
          if (n >= TABSTOP) {
            putchar('\t');
            n -= TABSTOP;
          } else {
          putchar(' ');
          }
        }
        putchar(c);
        n = 0;
        break;
    }
  }
  

  return 0;
}
