#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    a=(a*(1+a+(a*a)));
    printf("%d\n",a);
}
