#include <stdio.h>
int main(void)
{
    int h,a,cnt = 0;
    scanf("%d%d",&h,&a);
    while(1)
    {
        h -= a;
        cnt++;
        if(h <= 0)
            break;
    }
    printf("%d",cnt);
    return 0;
}
