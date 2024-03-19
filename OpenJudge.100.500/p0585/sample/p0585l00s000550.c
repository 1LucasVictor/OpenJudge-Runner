#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,t,c,ans;
    scanf("%d %d %d",&a,&b,&t);
    c=t/a;
    ans=b*c;
    
    printf("%d",ans);
    return 0;
}