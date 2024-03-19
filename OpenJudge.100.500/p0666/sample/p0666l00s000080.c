#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,b;
    while (scanf("%d%d%d",&x,&a,&b)!=EOF)
    {
        if (b-a>x)
            printf("dangerous\n");
        else if (b+a<=x)
            printf("delicious\n");
        else
            printf("safe\n");
    }
    return 0;
}