#include<stdio.h>
#include<math.h>
int main()
{
      long long int n,d;
      scanf("%lld%lld",&n,&d);
      long long int x,y,ans=0;
      while(n--)
      {
            scanf("%lld%lld",&x,&y);
            long long int m;
            m=(x*x)+(y*y);
            double n;
            n=(double) (sqrt(m));
            if(n<=(double)d) ans++;
      }
      printf("%lld\n",ans);

      return 0;
}
