#include <stdio.h>

int main(void) {
  int first = 0, second = 0, third = 0;
  printf("Enter three integers: ");
  scanf("%d%d%d", &first, &second, &third);
  printf("Sum of the given integers: %d\n", first + second + third);
  return 0;
}