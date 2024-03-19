#include<stdio.h>
int main()
{
    int a,b,c,i,divisor=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
        if(c%i==0)
        {
            divisor++;
        }
    }
    printf("%d\n",divisor);
    return 0;
}

