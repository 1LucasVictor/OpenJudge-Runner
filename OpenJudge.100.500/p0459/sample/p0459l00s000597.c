#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b<=4*a&&b>=2*a&&(b%2)==0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
