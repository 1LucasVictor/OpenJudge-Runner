
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ans;
    ans=(n/500)*1000;
    n=n%500;
    ans+=(n/5)*5;
    printf("%d",ans);

    return 0;
}
