#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char operator;
  printf("Enter operator (+, -, *, /): ");
  scanf("%c", &operator);

  if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
    printf("Enter a valid operator");
    return 0;
  }

  double a, b;
  printf("Enter operand a: ");
  scanf("%lf", &a);
  printf("Enter operand b: ");
  scanf("%lf", &b);

  double result;
  switch (operator) {
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '/':
      result = a / b;
      break;
  }
  printf("%lf %c %lf = %lf", a, operator, b, result);
  return 0;
}
