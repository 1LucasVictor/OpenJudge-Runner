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
    else
        printf("%d\n",mul);


    return 0;
}
