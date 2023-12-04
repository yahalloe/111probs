#include <stdio.h>

int main(void) {
  static int input = 0;

  printf("Enter your integer: ");
  if (scanf("%d", &input) != 1) {
    printf("Failed to read integer.\n");
    return 0;
  } else {
    input = (input < 0) ? -input : input;
    printf("%d", input);
  }

  return 0;
}
