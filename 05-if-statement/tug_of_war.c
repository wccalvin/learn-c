#include <stdio.h>

int main(void) {
  // get the number of team members
  int numOfMembers = 0;
  scanf("%d", &numOfMembers);
  int teamOneTotal = 0;
  int teamTwoTotal = 0;

  // alternating the values for the team members
  for (int i = 1; i <= numOfMembers * 2; i++) {
    int weight = 0;
    scanf("%d", &weight);
    if (i % 2 == 0) {
      teamTwoTotal += weight;
    } else {
      teamOneTotal += weight;
    }
  }
  // output text
  if (teamOneTotal > teamTwoTotal) {
    printf("Team 1 has an advantage\n");
  } else {
    printf("Team 2 has an advantage\n");
  }
  printf("Total weight for team 1: %d\n", teamOneTotal);
  printf("Total weight for team 2: %d\n", teamTwoTotal);
  return 0;
}
