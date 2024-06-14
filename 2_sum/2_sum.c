#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int A, B, sum = 0;
  printf("Enter the numbers to sum: \n");
  scanf("%d%d", &A, &B);
  sum = A + B;
  printf("Sum: %d", sum);  
  return 0;
}
