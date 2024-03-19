#include<stdio.h>
int main()
{
    long long num1,num2,g,l,i,j,min,temp1,temp2;
    while(scanf("%lld %lld",&num1,&num2) != EOF)
    {
        temp1=num1;
        temp2=num2;
        while (temp1 != 0)
        {
            g=temp1;
            temp1=temp2 % temp1;
            temp2=g;
        }
        l=(num1*num2)/g;
        printf("%lld %lld\n",g,l);
    }
    return 0;
}