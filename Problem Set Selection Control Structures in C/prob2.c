#include <stdio.h>

int main(void) {
  int input;

  printf("Enter grade: ");
  if (scanf("%d", &input) == 1) {
    printf("%d ", input);
  } else {
    printf("Failed to read integer.\n");
    return 0;
  }

  if (input > 90 && input < 100) {
    printf("Your grade is A");
  } else if (input > 80 && input < 89) {
    printf("Your grade is B");
  } else if (input > 70 && input < 79) {
    printf("Your grade is C");
  } else if (input > 60 && input < 69) {
    printf("Your grade is D");
  } else if (input > 0 && input < 59) {
    printf("Your grade is F");
  } else {
    printf("invalid grade");
    return 1;
  }

  return 0;
}
