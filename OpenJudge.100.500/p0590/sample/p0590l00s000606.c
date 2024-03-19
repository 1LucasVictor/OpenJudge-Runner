#include <stdio.h>
int main (void)
{
    int a,b,c,d,e,k,max,min;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
    max=a;
    if(max<=b)
        max=b;
    if(max<=c)
        max=c;
    if(max<=d)
        max=d;
    if(max<=e)
        max=e;
    min=e;
    if(min>=d)
        min=d;
    if(min>=c)
        min=c;
    if(min>=b)
        min=b;
    if(min>=a)
        min=a;
    if((max-min)>k)
        printf(":(\n");
    else
        printf("Yay!\n");
    return 0 ;
}
