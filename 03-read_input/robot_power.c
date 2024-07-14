#include <stdio.h>

int main(void) {
  int numOfRobots = 0, height = 0, weight = 0, powerOfEngines = 0,
      resistanceRating = 0, power = 0, sumOfPower = 0;
  scanf("%d", &numOfRobots);
  for (int i = 0; i < numOfRobots; i++) {
    scanf("%d %d %d %d", &height, &weight, &powerOfEngines, &resistanceRating);
    power = (powerOfEngines + resistanceRating) * (weight - height);
    sumOfPower += power;
  }
  printf("%d\n", sumOfPower);
  return 0;
}