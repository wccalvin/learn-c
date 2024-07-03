#include <stdio.h>

int main(void) {
  int givenInteger = 0;
  scanf("%d", &givenInteger);
  for (int i = 0; i <= 10; i++) {
    printf("%dx%d = %d\n", i, givenInteger, i * givenInteger);
  }
  return 0;
}