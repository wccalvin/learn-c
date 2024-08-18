#include <stdio.h>

/* Problem:
 * You plan to make a delicious meal and want to take the money you need to buy
 * the ingredients. Fortunately you know in advance the price per pound of each
 * ingredient as well as the exact amount you need. The program should read in
 * the number of ingredients (up to a maximum of 10 ingredients), then for each
 * ingredient the price per pound. Finally your program should read the weight
 * necessary for the recipe (for each ingredient in the same order). Your
 * program should calculate the total cost of these purchases, then display it
 * with 6 decimal places.
 *
 * Input:
 * 4
 * 9.90 5.50 12.0 15.0
 * 0.250 1.5 0.300 1.0
 *
 * Output:
 * 29.325000
 */
int main() {
  int numOfIngredients = 0;
  double totalCost = 0.0;
  scanf("%d", &numOfIngredients);

  if (numOfIngredients <= 10) {
    double pricePerPound[numOfIngredients],
        weightForIngredients[numOfIngredients];
    for (int i = 0; i < numOfIngredients; i++) {
      scanf("%lf", &pricePerPound[i]);
    }
    for (int i = 0; i < numOfIngredients; i++) {
      scanf("%lf", &weightForIngredients[i]);
    }
    for (int i = 0; i < numOfIngredients; i++) {
      totalCost += pricePerPound[i] * weightForIngredients[i];
    }
    printf("%lf\n", totalCost);
  }
  return 0;
}