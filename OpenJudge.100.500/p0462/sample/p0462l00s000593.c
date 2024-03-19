#include<stdio.h>
#include<math.h>

int main()
{
  long A; double B;
  scanf("%ld %lf",&A,&B);
  double a;
  a = floor(A*B);
  printf("%.0lf",a);
}
