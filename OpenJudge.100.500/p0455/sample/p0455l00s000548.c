#include<stdio.h>
int main()
{
    int n,i,sum=0,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
    sum1=n;
    sum2=n*n;
    sum3=n*n*n;
    sum=(sum1+sum2+sum3);
    printf("%d\n",sum);
    return 0;
}