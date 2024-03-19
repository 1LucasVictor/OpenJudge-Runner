#include <stdio.h>
#include <math.h>

int main(void)
{
    int h, n, a , sum = 0;

    scanf("%d %d",&h,&n);
    while(n--)
    {
        scanf("%d",&a);
        sum+=a;
    }
    if(sum>=h)
        printf("Yes");
    else
        printf("No");

    return 0;
}
