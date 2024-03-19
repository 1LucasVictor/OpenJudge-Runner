#include<stdio.h>


int main(){

   long long int a;
   double b;

   scanf("%lld %lf",&a,&b);

  long long int c = b * 100 + 0.5;
  long long int ans = (a * c) /100;

   printf("%lld",ans);

  return 0;
}
