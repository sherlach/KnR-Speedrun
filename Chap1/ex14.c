#include <stdio.h>

/* draw a char frequncy histogram, horizontal orientation. (I did 
 * vertical last time and it doesn't really work for letters.) 
 */ 

#define MAXDIGIT 27

int main() {
  int c, i, j;
  int inword;
  
  int ndigit[MAXDIGIT];

  for (i = 0; i < MAXDIGIT; i++) 
    ndigit[i] = 0;
  
  while ((c = getchar()) != EOF) {
    if ((c-'a') < MAXDIGIT) {
      ndigit[c-'a']++;
    } else {
      ndigit[MAXDIGIT-1]++;
    }
  }

  printf("Horizontal Chart:\n");
  for (i = 0; i < MAXDIGIT; i++) {
    if (i == MAXDIGIT-1) {
      printf("*\t");
    } else {
      printf("%c\t", i+'a');
    }
    for (j = 0; j < ndigit[i]; j++) {
      putchar('|');
    }
    putchar('\n');
  }

  /*
  printf("Vertical Chart:\n");
  int maxheight = 0; 

  // this is a good variable name for the first half
  // but not so much for the second half of this process
  
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
  */
  return 0;
}
