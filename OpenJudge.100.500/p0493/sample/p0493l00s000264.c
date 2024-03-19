#include <stdio.h>

int main()
 {
 long long int X,h;
 int c1=0,c2=0;
 scanf("%lld",&X);
 while(X>=500)
 {
   X=X-500;
   c1++;
 }
 while(X>=5)
 {
   X=X-5;
   c2++;
 }
h=(1000*c1)+(5*c2);
printf("%lld",h);
  return 0;
}