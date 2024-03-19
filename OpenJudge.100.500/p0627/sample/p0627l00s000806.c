#include<stdio.h>
int main()
{
    int A,B,sum=0,mul=1,add=0;
    scanf("%d %d",&A,&B);
    sum= A+B;
    add= A-B;
    mul= A*B;
    if(A==0 && B==0)
    {
        printf("0");
    }
    else if(sum>add && sum>mul)
    {
        printf("%d\n",sum);
    }
    else if(add>sum && add>mul)
    {
        printf("%d\n",add);
    }
    else if(mul>sum && mul>add)
    {
        printf("%d\n",mul);
    }
    return 0;
}
