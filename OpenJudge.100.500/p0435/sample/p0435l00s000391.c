#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,d,x,y,ans=0;
    scanf("%lld %lld",&n,&d);
    while(n--)
    {
         scanf("%lld %lld",&x,&y);
        if(sqrt((x*x)+(y*y))<=d)
            ans+=1;
    }
    printf("%lld",ans);;
}