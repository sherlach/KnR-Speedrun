#include <stdio.h>

int main() {
  enum State { safe, waiting, lined, blocked };
  enum State state;
  int c, p;

  state = safe;

  for (p = '\0'; (c = getchar()) != EOF; p = c) {
    if (state == blocked) {
      if (p == '*' && c == '/') {
        state = safe;
        c = '\0';
      }
    } else {
    if (c == '/') {
      state = waiting;
      if (p == '/') {
        state = lined;
      } 
    } else if (c == '*' && p == '/') {
      state = blocked; 
    } else if (c == '\n') {
      state = safe;
    } else {
      if (state == waiting) {
        putchar(p);
        state = safe;
      }
    }
    }

  if (state == safe) {
    putchar(c);
  }

  }
  return 0;
}
