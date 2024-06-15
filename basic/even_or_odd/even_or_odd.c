#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int x;
  printf("Enter number to check: ");
  scanf("%d", &x);

  int remainder = x % 2;

  if (remainder == 0) {
    printf("%d is even", x);
  }
  else {
    printf("%d is odd", x);
  }
  return 0;
}
