#include <stdio.h>

int main(void) {
  int howMany = 0, numRead = 0, sum = 0;
  printf("How many values to be read?\n");
  scanf("%d", &howMany);
  for (int i = 0; i < howMany; i++) {
    printf("Enter %d value: ", i + 1);
    scanf("%d", &numRead);
    sum += numRead;
    printf("Sum of %d given values: %d\n", i + 1, sum);
  }
  return 0;
}