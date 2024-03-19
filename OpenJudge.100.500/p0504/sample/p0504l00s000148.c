#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,a,k=0;
    scanf("%d %d",&h,&a);
    while(h > 0)
    {
        h = h-a;
        k++;
    }
    printf("%d\n",k);
    return 0;
}
