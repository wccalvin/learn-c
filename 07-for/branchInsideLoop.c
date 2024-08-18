#include <stdio.h>

/*
 * You want to determine the number of cities in a given region that have a
 * population strictly greater than 10,000. To do this, you write a program that
 * first reads the number of cities in a region as an integer, and then the
 * populations for each city one by one (also integers).
 *
 * Input:
6
1000
5000
15000
4780
0
23590
 * Output:
2
 */
int main() {
  int numOfCities, numOfCity = 0;
  scanf("%d", &numOfCities);
  for (int i = 0; i < numOfCities; i++) {
    int temp = 0;
    scanf("%d", &temp);
    if (temp > 10000) {
      numOfCity += 1;
    }
  }
  printf("%d\n", numOfCity);
  return 0;
}