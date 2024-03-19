//How many divisors?

#include<stdio.h>

int main(void)
{
    int a,b,c,cnt=0;
    scanf("%d%d%d",&a,&b,&c);

    do
    {
        if(c%a==0) cnt++;
    }while(a++!=b);

    printf("%d\n",cnt);

    return 0;

}
