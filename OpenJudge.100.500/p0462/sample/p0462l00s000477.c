#include<stdio.h>
 
int main(){
  unsigned long long a;
  double b;
  scanf("%llu %lf",&a,&b);
  unsigned long long c=a*b;
  printf("%llu",c);
  return 0;
}