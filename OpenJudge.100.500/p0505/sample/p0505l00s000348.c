#include <stdio.h>

int main()
{
    int h,n,a;
    scanf("%d %d",&h,&n);
    while(n--)
    {
        scanf("%d",&a);
        h=h-a;
    }
    if(h>0)
        printf("No");
    else
        printf("Yes");
    return 0;
}