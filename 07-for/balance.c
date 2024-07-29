#include <stdio.h>

int main(void) {
  int numOfCars = 0;
  scanf("%d", &numOfCars);
  double weights[numOfCars];
  double sum = 0.0;
  for (int i = 0; i < numOfCars; i++) {
    double temp;
    scanf("%lf", &temp);
    weights[i] = temp;
    sum += temp;
  }
  double avg = sum / numOfCars;
  for (int i = 0; i < numOfCars; i++) {
    printf("%.1lf\n", avg - weights[i]);
  }
  return 0;
}
