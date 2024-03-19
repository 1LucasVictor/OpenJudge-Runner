#include <stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=c-(a-b);
    if(d>=0) printf("%d\n",d);
    else printf("0\n");
    return 0;
}
