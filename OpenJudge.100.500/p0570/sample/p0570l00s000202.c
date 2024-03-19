#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int a=(x+y);
    if(a%2==0)
        printf("%d",a/2);
    else
        printf("IMPOSSIBLE");
    return 0;
}