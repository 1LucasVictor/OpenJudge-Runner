#include<stdio.h>
#include<stdlib.h>
int main()
{
   long long int A,B,c,K;
    scanf("%lld %lld",&A,&B);
    c=A+B;
    K=(A+B)/2;
    if(c%2==0)
    {
printf("%lld",K);
    }
    else
    {
        printf("IMPOSSIBLE");
    }

}
