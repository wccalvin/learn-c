#include <stdio.h>

int main(void) {
  char charName;
  scanf("%c", &charName);
  printf("++++%c++++\n", charName);
  printf("+++%c%c%c+++\n", charName, charName, charName);
  printf("++%c%c%c%c%c++\n", charName, charName, charName, charName, charName);
  printf("+%c%c%c%c%c%c%c+\n", charName, charName, charName, charName, charName,
         charName, charName);
  printf("%c%c%c%c%c%c%c%c%c\n", charName, charName, charName, charName,
         charName, charName, charName, charName, charName);
  return 0;
}