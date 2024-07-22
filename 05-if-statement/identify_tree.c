#include <stdio.h>

int main(void) {
  int height = 0, numOfLeaflets = 0;
  scanf("%d", &height);
  scanf("%d", &numOfLeaflets);
  // conditional check to indentify tree species
  if (height <= 5 && numOfLeaflets >= 8)
    printf("Tinuviel\n");
  else if (height >= 10 && numOfLeaflets >= 10)
    printf("Calaelen\n");
  else if (height <= 8 && numOfLeaflets <= 5)
    printf("Falarion\n");
  else if (height >= 12 && numOfLeaflets <= 7)
    printf("Dorthonion\n");
  else
    printf("Uncertain\n");
  return 0;
}