#include<stdio.h>
int main()
{
     long long int a,b,c,k,ans;
     scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
     if(a>=k)
          ans=k;
     else if(a<k)
          ans=a;
     else if(a+b<k)
          ans=a-(k-a-b);

     printf("%lld\n",ans);

     return 0;

}
