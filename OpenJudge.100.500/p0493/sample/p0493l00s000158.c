#include<stdio.h>
int main()
{
    int n,div1,div2,rem,sum;
    scanf("%d",&n);
    div1=n/500;
    rem=n%500;
    div2=rem/5;
    sum=(div1*1000)+(div2*5);
    printf("%d\n",sum);
    return 0;
}