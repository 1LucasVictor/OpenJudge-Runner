#include<stdio.h>

int main(void)
{
long long int a,b,k;

scanf("%ld",&a);
scanf("%ld",&b);

k = (a*a-b*b)/(2*a-2*b);
if((a*a-b*b)%(2*a-2*b)!=0)
        printf("IMPOSSIBLE\n");
else    printf("%ld\n",k);
return 0;
}
