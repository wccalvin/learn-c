#include <stdio.h>

int main(void) {
  int eight = 8;
  for (int i = 0; i <= 10; i++) {
    printf("%dx%d = %d\n", i, eight, i * eight);
  }
  return 0;
}