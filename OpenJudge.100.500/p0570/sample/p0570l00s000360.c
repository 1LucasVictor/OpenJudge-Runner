#include<stdio.h>

int main(void)
{
long long int a,b,k;

scanf("%lld",&a);
scanf("%lld",&b);

k = (a*a-b*b)/(2*a-2*b);
if((a*a-b*b)%(2*a-2*b)!=0)
        printf("IMPOSSIBLE\n");
else    printf("%lld\n",k);
return 0;
}
