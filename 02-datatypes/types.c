#include <stdio.h>

int main() {
  printf("data types and size:\n");
  // ld represents long integer
  printf("int: %ld bytes\n", sizeof(int));
  printf("float: %ld bytes\n", sizeof(float));
  printf("double: %ld bytes\n", sizeof(double));
  // single character
  printf("char: %ld byte\n", sizeof(char));
  return 0;
}