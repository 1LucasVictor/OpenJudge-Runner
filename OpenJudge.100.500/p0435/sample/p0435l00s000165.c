#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
      long long int n,d;
      scanf("%lld%lld",&n,&d);
      long long x,y,i;
      int ans=0;
      for(i=1;i<=n;i++){
            scanf("%lld%lld",&x,&y);
            double c;
            c=sqrt((double)(x*x)+(double)(y*y));
            if(c<=(double)d) ans++;
      }
      printf("%d",ans);

      return 0;
}
