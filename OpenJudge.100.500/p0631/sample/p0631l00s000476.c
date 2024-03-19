#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c<=(a+b)&&c>=a)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
