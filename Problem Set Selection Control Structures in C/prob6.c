#include <stdio.h>

int main(void) {
  int num = 0, num1 = 0, total = 0;
  char operator= ' ';

  printf("Enter the first number: ");
  if (scanf("%d", &num) != 1) {
    printf("Failed to read integer.\n");
    return 1;
  }

  printf("Enter the second number: ");
  if (scanf("%d", &num1) != 1) {
    printf("Failed to read integer.\n");
    return 1;
  }

  printf("Enter the operation(+,-,*,/): ");
  if (scanf("%s", &operator) != 1) {
    printf("Failed to read integer.\n");
    return 1;
  }

  if (operator== '+') {
    total = num + num1;
    printf("%d + %d = %d\n", num, num1, total);
  } else if (operator== '-') {
    total = num - num1;
    printf("%d - %d = %d\n", num, num1, total);
  } else if (operator== '*') {
    total = num * num1;
    printf("%d * %d = %d\n", num, num1, total);
  } else if (operator== '/') {
    total = num / num1;
    printf("%d / %d = %d\n", num, num1, total);
  } else {
    printf("invalid operator\n");
  }

  return 0;
}
