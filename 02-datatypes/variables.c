#include <stdio.h>

int main() {
  // variable is an identifier for the block in memory
  // variables must be declared with data types before they are used
  int a, b;
  a = 10;
  b = 5;
  int c = a + b;
  printf("a (%d) + b (%d) = c (%d)\n", a, b, c);

  char letter = 'A';
  float price = 9.99;
  printf("char: %c; price: %f\n", letter, price);

  // constants must be initialized with the value when defined
  const double PI = 3.141;
  printf("value of PI: %f", PI);

  return 0;
}