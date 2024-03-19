#include<stdio.h>
int main(void)
{
    int n,a,b,s;
    scanf("%d",&n);
    a=n/2;
    b=n%2;
    if(b>0)
        a++;
    printf("%d\n",a);
    return 0;
}