#include <stdio.h>

int main(){
  long int a;
  double b;

  scanf("%ld %lf",&a,&b);
  printf("%ld",(long int)((double)(a)*b));
  return 0;
}
