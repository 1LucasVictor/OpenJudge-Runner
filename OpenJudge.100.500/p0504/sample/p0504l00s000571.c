#include <stdio.h>

int main()
{
    int h,a = 0;

    scanf("%d %d",&h,&a);

    if (h - a*(h/a) == 0) printf("%d",h/a);
    else printf("%d",h/a+1);

    return 0;
}