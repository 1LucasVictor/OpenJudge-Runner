#include <stdio.h>

int main(void)
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if(b-a<1)puts("delicious");
    else if(b-a<=x)puts("safe");
    else puts("dangerous");
    return 0;
}