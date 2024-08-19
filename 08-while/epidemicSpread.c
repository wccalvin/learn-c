#include <stdio.h>

/*
 * For a total population of 3 inhabitants, on day 1 a single person is
 * infected. The next day, that person contaminates 2 new people, how many
 * days it takes to contaminate entire population
 */
int main() {
  int totalPopulation = 4;
  int infected = 1;
  int day = 1;
  scanf("%d", &totalPopulation);
  while (infected < totalPopulation) {
    infected = infected + (infected * 2);
    day += 1;
    if (infected >= totalPopulation) {
      infected = totalPopulation;
    }
  }
  printf("%d\n", day);
  return 0;
}