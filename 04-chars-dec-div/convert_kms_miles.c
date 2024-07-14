#include <stdio.h>

int main(void) {
  double kms;
  printf("Provide value in kms: ");
  scanf("%lf", &kms);
  printf("Computed value in miles: %.2lf\n", kms * 0.621371);
}