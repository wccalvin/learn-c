#include <stdio.h>

int main(void) {
  // integer division
  printf("5/2 is %d\n", 5 / 2); // leaves out the decimal places
  // floating point division
  printf("5/2.0 is %.2lf\n", // use the correct format specifies in printf (%lf)
         5 / 2.0);           // one of the values should be floating point

  return 0;
}