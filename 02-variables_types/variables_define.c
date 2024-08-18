#include <stdio.h>

int main(int argc, char **argv) {
// these are instructions to pre-processor.
// the values are substituted instead of assignment
#define PI 3.141593
  printf("defined constant variable PI = %lf\n", PI);
// macro redefinition is possible - it compiles with warnings
#define PI 3.14
  printf("defined constant variable PI = %.2lf\n", PI);
  return 0;
}