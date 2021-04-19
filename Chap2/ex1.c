#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("Signed:\n");
  printf("char: %d\n", SCHAR_MAX);
  printf("short: %d\n", SHRT_MAX);
  printf("int: %d\n", INT_MAX);
  printf("long: %d\n", LONG_MAX);
  printf("Unsigned:\n");
  printf("char: %d\n", UCHAR_MAX);
  printf("short: %d\n", USHRT_MAX);
  printf("int: %d\n", UINT_MAX);
  printf("long: %d\n", ULONG_MAX);
  return 0;
}
