#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int a, int b) {
  return a > b ? a : b;
}
int main(int argc, char **argv) {
  int x, y, z;
  printf("Enter number 1: ");
  scanf("%d", &x);
  printf("Enter number 2: ");
  scanf("%d", &y);
  printf("Enter number 3: ");
  scanf("%d", &z);

  int maxNum = max(max(x, y), z);
  printf("Largest number is %d", maxNum);
  return 0;
}

