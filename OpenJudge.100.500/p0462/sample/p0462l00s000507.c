#include <stdio.h>
int main(){
  long a;
  double b;
  
  scanf("%ld %lf",&a,&b);
  
  printf("%ld",(long)(a*b));
}