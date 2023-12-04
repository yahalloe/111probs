#include <stdio.h>

int main(void) {
  int input[3];

  for (int i = 0; i < 3; i++) {
    printf("Enter number: ");
    scanf("%d", &input[i]);
    /*
       if (scanf("%d", &input[i]) != 1) {
        printf("Failed to read integer.\n");
        return 1;
      } */
  }

  if (input[0] > input[1]) {
    if (input[0] > input[2]) {
      printf("%d is the largest\n", input[0]);
    }
  }

  if (input[1] > input[0]) {
    if (input[1] > input[2]) {
      printf("%d is the largest\n", input[1]);
    }
  }

  if (input[2] > input[1]) {
    if (input[2] > input[0]) {
      printf("%d is the largest\n", input[2]);
    }
  }

  if (input[2] == input[1] && input[2] == input[0]) {
    printf("All numbers are the same\n");
  }

  if (input[0] == input[1]) {
    if (input[0] > input[2] && input[1] > input[2])
      printf("%d and %d are the largest numbers\n", input[0], input[1]);
  }

  if (input[2] == input[0]) {
    if (input[2] > input[1] && input[0] > input[1])
      printf("%d and %d are the largest numbers\n", input[0], input[2]);
  }

  if (input[2] == input[1]) {
    if (input[2] > input[0] && input[1] > input[0])
      printf("%d and %d are the largest numbers\n", input[1], input[2]);
  }

  return 0;
}
