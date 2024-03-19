#include <stdio.h>
int main(void)
{
    int a,b,t,ans;
    scanf("%d%d%d", &a,&b,&t);
    ans=(t-t%a)/a*b;
    printf("%d", ans);
    return 0;
}