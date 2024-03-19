#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    c-=(a-b);
    if(c<0)
        c=0;
    printf("%d",c);
    return 0;
}
