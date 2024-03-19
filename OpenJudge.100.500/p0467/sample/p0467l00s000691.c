#include <stdio.h>

int main()
{
    long long a,b,c,k,s;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
   if(k>=a) {
       s=a;
       k=k-a;
       if(k>=b) {
           k-=b;
           if(k>=c) {
               s-=c;
               k-=c;
           }
           else { s-=k; }
       }
   }
   else { s=k; }
   printf("%lld",s);

    return 0;
}