#include <stdio.h>

/*
 * Your program will have to read a sequence of positive integers and display
 * their sum. We do not know how many integers there will be, but the sequence
 * always ends with the value -1 (which is not an expense, just an end marker).
 */

int main() {
  int expenses, sum = 0;
  while (expenses != -1) {
    scanf("%d", &expenses);
    if (expenses != -1)
      sum += expenses;
  }
  printf("%d\n", sum);
  return 0;
}