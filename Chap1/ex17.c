#include <stdio.h>

/* print all input lines longer than 80 characters */

#define THRESHOLD 80

int main() {
  int storedline[THRESHOLD+1]; //stores the first 80 characters per line
  int i, j, c;

  for (i = 0; (c = getchar()) != EOF; i++) {
    if (i < THRESHOLD) {
      if (c == '\n') {
        i = 0;
        for (j = 0; j < THRESHOLD; j++) {
          storedline[j] = '\0';
        }
      } else {
        storedline[i] = c;
      }
    
    } else if (i == THRESHOLD) { // we just crossed the threshold
      for (j = 0; j < THRESHOLD; j++) {
        printf("%c", storedline[j]);
      }
      printf("%c", c);
    } else { 
      printf("%c", c);
    }
  }
  return 0;
}
