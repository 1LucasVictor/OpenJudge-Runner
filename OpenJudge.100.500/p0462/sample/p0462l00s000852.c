#include<stdio.h>
#include<math.h>
int main(void){
  long int a;
  double b;
  scanf("%ld %lf", &a, &b);
  printf("%.0lf", floor(a*b));
}