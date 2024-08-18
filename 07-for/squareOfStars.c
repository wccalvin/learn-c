#include <stdio.h>
/*
 * Create a program that displays on the screen a square of n x n stars, with
 * the integer n given as an input.
 */
int main() {
  int numOfStars = 0;
  scanf("%d", &numOfStars);
  for (int j = 0; j < numOfStars; j++) {
    for (int i = 0; i < numOfStars; i++) {
      printf("*");
      if (i + 1 == numOfStars) {
        printf("\n");
      }
    }
  }
  return 0;
}