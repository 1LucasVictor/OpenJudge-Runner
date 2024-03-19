#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,cnt=0;
    long long int d_str,ans,d,x,y;
    scanf("%d %lld",&n,&d);
    while(n--)
    {
        scanf("%lld %lld",&x,&y);
        d_str=d*d;
        ans=x*x+y*y;
        if(ans<=d_str)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}
