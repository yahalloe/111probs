#include <stdio.h>

int main(void) {
  int angle1, angle2, angle3, sum;

  printf("Enter three angles of the triangle [60 60 60]: ");
  if (scanf("%d %d %d", &angle1, &angle2, &angle3) == 3) {
    printf("%d %d %d", angle1, angle2, angle3);
  } else {
    printf("Failed to read integer.\n");
    return 0;
  }

  if (angle1 + angle2 + angle3 == 180) {
    if (angle1 == angle2 && angle2 == angle3) {
      printf("The triangle is an equilateral triangle.\n");
    } else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3) {
      printf("The triangle is an isosceles triangle.\n");
    } else {
      printf("The triangle is a scalene triangle.\n");
    }
  } else {
    sum = angle1 + angle2 + angle3;
    printf("are invalid angles! The angles of a triangle should sum up to 180 "
           "degrees.\nsum = %d",
           sum);
  }

  return 0;
}
