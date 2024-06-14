#include <stdlib.h>
#include <stdio.h>

// Prints the size of char, int, float and double
int main(int argc, char **argv) {
  char charType;
  int intType;
  float floatType;
  double doubleType;

  // Size of char
  int charSize = sizeof(charType);
  printf("size of char: %d\n", charSize);

  // Size of int
  int intSize = sizeof(intType);
  printf("size of int: %d\n", intSize);
  
  // Size of float
  int floatSize = sizeof(floatType);
  printf("size of float: %d\n", floatSize);

  // Size of double
  int doubleSize = sizeof(doubleType);
  printf("size of double: %d\n", doubleSize);
  return 0;
}
