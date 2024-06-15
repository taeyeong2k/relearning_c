#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float compound_interest(float principal, int time, float rate) {
  float total;
  total = principal * pow(rate, time);
  return total;
}
int main(int argc, char **argv) {
  float principal;
  int time;
  float rate;
  printf("Enter Principal (amount): ");
  scanf("%f", &principal);
  printf("Enter Time: ");
  scanf("%d", &time);
  printf("Enter rate: ");
  scanf("%f", &rate);
  float total = compound_interest(principal, time, rate);
  printf("Total = %f", total);
  return 0;
}

