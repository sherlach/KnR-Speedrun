#include <stdio.h>
#include <stdbool.h>

int main() {
  bool blocked;
  bool lined;
  int c, p;

  for (p = '\0'; (c = getchar()) != EOF; c = p) {
    if (c == '/') {
      if (p == '/') {
        lined = true; 
        p = '\0';
        c = '\0';
      }
    } else if (c == '\n') {
      lined = false;
    }


  if (!(lined)) {
    putchar(p);
  }

  p = c;
  }
  return 1;
}
