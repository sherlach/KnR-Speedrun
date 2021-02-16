#include <stdio.h>

/* count whitespace */

int main() {
  int c;
  int blanks, tabs, newlines;
  blanks = 0;
  tabs = 0;
  newlines = 0;

  while ((c=getchar()) != EOF) {
    /* technically I "don't know" what a switch/case is yet */
    if (c == '\n')
      newlines++;
    else if (c == '\t')
      tabs++;
    else if (c == ' ')
      blanks++;
  }

  printf("blanks: %d, tabs: %d, newlines: %d\n", blanks, tabs, newlines);
  return 0;
}
