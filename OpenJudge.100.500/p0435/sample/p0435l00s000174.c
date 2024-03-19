#include <stdio.h>

int main(){
   int i,n,ans;
   long long x,y,d;

   scanf("%d %lld",&n,&d);
   d=d*d;
   for (ans=i=0;i<n;i++) {
      scanf("%lld %lld",&x,&y);
      if (x*x+y*y<=d) ans++;
   }
   printf("%d\n",ans);
   return 0;
}