#include <stdio.h>

int main(void) {
  int customerAge = 0, weightOfLuggage = 0;
  scanf("%d", &customerAge);
  scanf("%d", &weightOfLuggage);

  // conditional comparison to determine room cost
  int roomCost = 0;
  if (customerAge == 60) {
    roomCost = 0;
  } else if (customerAge < 10) {
    roomCost = 5;
  } else {
    roomCost = 30;
  }

  // conditional comparison to determine total cost
  if (roomCost == 0 || roomCost == 5) {
    printf("%d\n", roomCost);
  } else if (weightOfLuggage > 20) {
    printf("%d\n", roomCost + 10);
  } else {
    printf("%d\n", roomCost);
  }
  return 0;
}
