#include<stdio.h>
int main()
{
    int a,b,x,r,g;
    scanf("%d %d %d",&a,&b,&x);
    if(b>=a && b>=x)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
