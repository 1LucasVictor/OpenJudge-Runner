#include <stdio.h>

int main()
{
    int a,b,t,ans;
    scanf("%d %d %d",&a,&b,&t);
    for(int i=1;i<=t/a;i++){
        ans+=b;
    }
    printf("%d",ans);
}
