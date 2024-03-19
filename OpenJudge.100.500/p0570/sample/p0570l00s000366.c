#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,k,m;
    scanf("%d %d",&a,&b);
    m=abs(a-b) % 2;
    if(m==1){
        printf("IMPOSSIBLE");
        return 0;
    };
    k=(a+b)/2;
    printf("%d",k);
    return 0;
};