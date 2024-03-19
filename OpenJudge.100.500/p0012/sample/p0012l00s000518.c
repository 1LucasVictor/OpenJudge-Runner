#include<stdio.h>
int main(void)
{
    int num1[1001],num2[1001]={0},a=0,b=0;
    while(scanf("%d",&num1[a])!=EOF)
    {
        if(num1[a]==0)
        {
            num2[b]=num1[a-1];
            a-=2;
            b++;
        }
        a++;
    }
    b=0;
    while(num2[b])
    {
        printf("%d\n",num2[b]);
        b++;
    }
    return 0;
}