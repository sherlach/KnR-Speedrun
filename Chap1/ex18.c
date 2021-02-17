#include <stdio.h>

/* WAP - the whitespace auditing program */
/* XXX this particular one hasn't been tested very thoroughly, clean up later */

#define MAXWHITELEN 100

int main() {
  int c, i, j;
  int storedwhitespace[MAXWHITELEN];

  for (i = 0; i < MAXWHITELEN; i++) {
    storedwhitespace[i] = '\0';
  }
  i = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case '\n':
        for (i = 0; i < MAXWHITELEN; i++) {
          storedwhitespace[i] = '\0';
        }
        i = 0;
        break;
      case '\t':
      case  ' ':
        storedwhitespace[i] = c;
        i++;
        break;
      default:
      for (j = 0; j < MAXWHITELEN; j++) {
        printf("%c", storedwhitespace[j]);
      }
      printf("%c", c);
    }
  }
    /*
    if (c == '\n') {
      for (i = 0; i < MAXWHITELEN; i++) {
        storedwhitespace[i] = '\0';
      }
      i = 0;
    }
    if (c == '\t' || c == ' ') {
      storedwhitespace[i] = c;
      i++;
    }
    else {
      for (j = 0; j < MAXWHITELEN; j++) {
        printf("%c", storedwhitespace[j]);
      }
      printf("%c", c);
    }
    */
  return 0;
}
