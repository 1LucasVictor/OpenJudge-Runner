#include <stdio.h>
#include <math.h>
int main(){
  long a;
  double b,result;
  
  scanf("%ld %lf",&a,&b);
  result=floor((double)a*b);
  
  printf("%ld",(long)result);
}
