#include <stdio.h>

int main(void) {
  int quantities[10];
  int one, two, three, four, five, six, seven, eight, nine, ten;
  int id;
  scanf("%d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six,
        &seven, &eight, &nine, &ten);
  scanf("%d", &id);
  quantities[0] = one;
  quantities[1] = two;
  quantities[2] = three;
  quantities[3] = four;
  quantities[4] = five;
  quantities[5] = six;
  quantities[6] = seven;
  quantities[7] = eight;
  quantities[8] = nine;
  quantities[9] = ten;

  printf("%d\n", quantities[id]);

  return 0;
}