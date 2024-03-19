#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    if((a >= 1 && b <= 9) && (b >= 1 && b <= 9))
        printf("%d\n",a * b);
    else printf("-1");

    return 0;
}
