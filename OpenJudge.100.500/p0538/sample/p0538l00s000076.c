#include <stdio.h>

int main(void)
{
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    printf("%d",(a<=9 && b<=9) ? a*b:-1);
    return 0;
}
