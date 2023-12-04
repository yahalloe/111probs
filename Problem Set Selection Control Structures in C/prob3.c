#include <stdio.h>

int main(void) {
  int year;

  printf("Enter year: ");
  if (scanf("%d", &year) != 1) {
    printf("Failed to read integer.\n");
    return 1;
  }

  year %= 4;
  if (year == 0) {
    printf("is a leap year\n");
  } else
    printf("is NOT a leap year\n");

  return 0;
}
