#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c = a+b;
    if (c&1){
        puts("IMPOSSIBLE");
    }else
    {
        printf("%d\n",c/2);
    }
}
