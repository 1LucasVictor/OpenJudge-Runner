#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, a, b;
    scanf("%d %d %d",&x,&a,&b);
    if ((b - a)>x)
    {
        printf("dangerous\n");
    }
    else if ((b - a)<=0)
    {
        printf("delicious\n");
    }
    else
    {
        printf("safe\n");
    }
    return 0;
}
