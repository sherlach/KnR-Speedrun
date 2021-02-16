#include <stdio.h>

/* draw a word length histogram, vertical AND horizontal orientation */ 

#define MAXDIGIT 10

int main() {
  int c, i, j;
  int inword;
  
  int ndigit[MAXDIGIT];

  for (i = 0; i < MAXDIGIT; i++) 
    ndigit[i] = 0;
  
  inword = 0;
  i = 0;
  while ((c = getchar()) != EOF) {
    switch(c) {
      case '\n':
      case '\t':
      case ' ':
        if (i >= 0 && inword) {
          if (i < MAXDIGIT) {
            ndigit[i]++;
          } else {
            ndigit[0]++;
          }
        }
        inword = 0;
        i = 0;
        break;
      default:
        i++;
        inword = 1;
        break;
    }
  }

  printf("Horizontal Chart:\n");
  for (i = 0; i < MAXDIGIT; i++) {
    if (i == 0) {
      printf("*\t");
    } else {
      printf("%d\t", i);
    }
    for (j = 0; j < ndigit[i]; j++) {
      putchar('|');
    }
    putchar('\n');
  }

  printf("Vertical Chart:\n");
  int maxheight = 0; 
  /* this is a good variable name for the first half
   * but not so much for the second half of this process
   */
  for (i = 0; i < MAXDIGIT; i++) {
    if (ndigit[i] > maxheight)
     maxheight = ndigit[i]; 
  }
  while (maxheight > 0) {
    for (i = 0; i < MAXDIGIT; i++) {
      if (ndigit[i] >= maxheight) {
        printf("O\t");
      } else {
        printf(" \t");
      }
    }
    --maxheight;
    printf("\n");
  }
  for (i = 0; i < MAXDIGIT; i++) {
    if (i == 0) {
      printf("*\t");
    } else {
    printf("%d\t", i);
    }
  }  
  printf("\n");
  return 0;
}
