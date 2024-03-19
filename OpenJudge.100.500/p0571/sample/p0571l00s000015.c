
#include <stdio.h>

int main()
{   int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    
    printf("%d",a*n<b*n?a*n:b*n);

    return 0;
}
