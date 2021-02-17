#include <stdio.h>

/* modified maxline program */
#define MAXLINE 10

int gline(char [], int);
void copy(char[], char[]);

/* print the longest input line */

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = gline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {
    printf("Longest line had %d characters.\n", max);
    printf("The first characters (capped at %d) of that line are: %s\n", MAXLINE-2, longest);
  }
  return 0;
}

int gline(char s[], int lim) {
  int c, max, i;
  i = 0;
  for (max=0; /* i < lim-1 && */ (c=getchar()) != EOF && c !='\n'; max++) {
    if (i < lim-2) {
      s[i] = c;
      i++;
    }
  }

  if (c == '\n') {
      s[i] = c;
      i++;
  }
  
  s[i] = '\0';
  return max;
}

void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}
