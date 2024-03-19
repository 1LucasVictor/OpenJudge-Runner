#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S,h,m,s;
    scanf("%d",&S);
    s=S%60;
    S/=60;
    m=S%60;
    S/=60;
    h=S;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}