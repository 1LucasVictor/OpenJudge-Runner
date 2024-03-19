#include<stdio.h>
#include<math.h>

typedef long long int int64;
int main()
{
    int64 n,d;
    int i;
    int64 x,y;
    int ans=0;
    scanf("%lld %lld",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&x,&y);
        if((x*x+y*y)<=d*d)ans++;
    }
	printf("%d",ans);
}
