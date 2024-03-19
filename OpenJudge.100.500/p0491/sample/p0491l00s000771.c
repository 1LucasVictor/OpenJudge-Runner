#include<stdio.h>
int main ()
{  long long  n,k; scanf("%lld %lld",&n,&k);
   if(n<k)
   {  long long  x=k-n,y=n;
      if(y>x) printf("%d",x);
      else  printf("%d",y);
   }
   else
   {    long long  x=n%k,y=k-n%k;
       if(y>x) printf("%d",x);
      else  printf("%d",y);
   }
}