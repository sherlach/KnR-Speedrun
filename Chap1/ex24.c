#include <stdio.h>
#include <stdbool.h>

/* I'm definitely not bothered to do this in "full generality" */

int main() {
  int paren = 0;
  int brakt = 0;
  int brace = 0;
  int singq = 0;
  int doubq = 0;
  enum State { none, inparen, inbrakt, inbrace, insingq, indoubq };
  enum State state;

  int c;

  for (; (c = getchar() != EOF) ;) {
    switch (c) {
      case '(':
        state = inparen;
        paren++;
        break;
      case ')':
        paren--;
        /*if the state isn't insingq, indoubq, or inparen, there is a problem */
        break;
      case '[':
        state = inbrakt;
        brakt++;
        break;
      case ']':
        brakt--;
        break;
      case '{':
        state = inbrace;
        brace++;
        break;
      case '}':
        brace--;
        break;
        //etc.
    }
  }

  printf("paren: %d, brakt: %d, brace: %d\n", paren, brakt, brace);


  return state;
}
