#include<stdio.h>
#define min(a,b) a<b?a:b
int main()
{
    long long a,b,t;
    scanf("%lld%lld",&a,&b);
    t=b+a;
    if(t&1)
        printf("IMPOSSIBLE\n");
    else
        printf("%d\n",t/2);
    return 0;
}
