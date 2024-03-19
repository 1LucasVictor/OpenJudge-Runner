#include<stdio.h>
int main()
{
    int A,B,sum,sub,mul;
    scanf("%d %d",&A,&B);
    sum=A+B;
    sub=A-B;
    mul=A*B;
    if(sum>sub&&sum>mul)
    {
        printf("%d\n",sum);
    }
    else if(sub>sum&&sub>mul)
    {
        printf("%d\n",sub);
    }
    else if(sum==sub&&sub==mul)
    {
        printf("%d\n",sum);
    }
    else
    {
        printf("%d\n",mul);
    }
    return 0;
}
