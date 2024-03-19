
#include <stdio.h>
#define max(a,b) (a)>(b)?(a):(b)
int main()
{   int  a,b;
    scanf("%d%d",&a,&b);
    printf("%d",max((a*b),(max((a+b),(a-b)))));
    
    return 0;
}
