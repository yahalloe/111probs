#include <stdio.h>

int main(void) {
  int principal = 0, interest, time;

  printf("Enter principal: \n");
  if (scanf("%d", &principal) != 1) {
    printf("Failed to read integer.\n");
    return 1;
  }

  printf("Enter interest rate: \n");
  if (scanf("%d", &interest) != 1) {
    printf("Failed to read integer.\n");
    return 1;
  }

  printf("Enter time (year/s): \n");
  if (scanf("%d", &time) != 1) {
    printf("Failed to read integer.\n");
    return 1;
  }
  


  return 0;
}
