#include <stdio.h>

#define MAXLEN 100

void reverses(int[]);

int main() {
  int string[MAXLEN];
  int i, c;
  
  for (i = 0; i < MAXLEN; i++) {
    string[i] = '\0';
  }
  i = 0;

  while ((c = getchar()) != EOF && string[MAXLEN-1] == '\0') {
    switch(c) {
      case '\n':
        reverses(string);
        for (i = 0; i < MAXLEN; i++) {
          printf("%c", string[i]);
          string[i] = '\0';
        }
        printf("\n");
        i = 0;
        break;
      default:
        string[i] = c;
        i++;
    }
  if (string[MAXLEN-1] != '\0') {
    printf("Max size exceeded.\n");
    return -1;
  }
    
  }

  return 0;
}

void reverses(int s[]) {
  int i;
  int r[MAXLEN];
  for (i = 0; i < MAXLEN; i++) {
    r[i] = s[MAXLEN-1-i];
  }

  for (i = 0; i < MAXLEN; i++) {
    s[i] = r[i];
  }
  return;
}
