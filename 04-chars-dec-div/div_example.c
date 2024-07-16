#include <stdio.h>

int main(void) {
  double cementNeededInLbs = 295.8;
  int amountOfCementBag = 45;
  int cementBag = 120;
  // scanf("%lf", &cementNeededInLbs);

  double numOfCementBags = cementNeededInLbs / cementBag;
  int remainder = (int)cementNeededInLbs % cementBag;
  int bags = (int)(numOfCementBags) + (remainder != 0);
  printf("%d\n", bags);
  printf("%d\n", bags * amountOfCementBag);
  return 0;
}
