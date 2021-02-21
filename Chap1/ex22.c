#include <stdio.h>

#define N 10

void bprint(char s[]);
int shift(char s[], int w);

int main() {
  char s[N+1];
  int c, i, j, n;
  int w; //most recent whitespace index
  
  w = N+1;
  for (n = 0; (c = getchar()) != EOF; n++) {
    if (c == '\t' || c == ' ') {
      s[n] = c; 
      w = n;
    } else if (c == '\n') {
      s[n] = '\0';
      bprint(s);
      n = -1;
      w = N+1;
    } else {
      s[n] = c;
    }

    if (n >= N) {
      s[w] = '\0';
      bprint(s);
      n = N - w ;
      if (shift(s, w)) {
        n--;
      }
      w = N+1;
    }
  }
  
  return 0;
}

void bprint(char s[]) {
  int i;
  for (i = 0;  s[i] != '\0'; i++) {
    putchar(s[i]);
  }
  putchar('\n');
}

int shift(char s[], int w) {
  int i, r;
  r = 0;
  for (i = 0; i+w < N+1; i++) {
    s[i] = s[i+w+1];
    r = 1;
  }
  s[i+1] = '\0';
  return r;
}
