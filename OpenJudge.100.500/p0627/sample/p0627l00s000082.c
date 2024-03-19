#include<stdio.h>

int main()
{
    int a,b,sum,sub,mul;
    scanf("%d %d",&a,&b);

    sum=a+b;
    sub=a-b;
    mul=a*b;

    if(sum>sub && sum>mul)
        printf("%d\n",sum);
    else if(sub>sum && sub>mul)
        printf("%d\n",sub);
    else if(mul>sum && mul>sub)
        printf("%d\n",mul);
    else if(sum==sub==mul)
        printf("%d\n",sum);


    return 0;
}