#include<stdio.h>

int main(){
  double a;
  double b;

  scanf("%lf %lf",&a,&b);
  
  long long int ans = a*b;
  printf("%lld\n",ans);
}
