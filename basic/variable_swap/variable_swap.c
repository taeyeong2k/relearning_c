#include <stdlib.h>
#include <stdio.h>

// Function to swap two variables using pointers
int main(int argc, char **argv) {
  int A, B;
  printf("Enter the variables: \n");
  scanf("%d%d", &A, &B);
  printf("A = %d, B = %d\n", A, B);
  printf("Performing swap\n");

  // Define pointers
  int *a = &A;
  int *b = &B;
  int tmp = *a;
  *a = *b;
  *b = tmp;
  printf("Finished swap\n");
  printf("A = %d, B = %d\n", A, B);
  return 0;
  
}

