#include <stdio.h>
int main(void) {
  // convert int to decimals
  int num = 7;
  printf("value of num: %d\n", num);
  // cast to double
  double convertedNum = (double)num;
  printf("value of num in double: %lf\n", convertedNum);
  return 0;
}