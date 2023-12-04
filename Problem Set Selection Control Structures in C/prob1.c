#include <stdio.h>

int main(void) {
  int input, remainder;

  printf("Enter number: ");
  if (scanf("%d", &input) == 1) {
    printf("%d ", input);
  } else {
    printf("Failed to read integer.\n");
    return 0;
  }

  remainder = input % 2;

  if (remainder == 0) {
    printf("your number is even");
  } else {
    printf("your number is odd");
  }

  return 0;
}
