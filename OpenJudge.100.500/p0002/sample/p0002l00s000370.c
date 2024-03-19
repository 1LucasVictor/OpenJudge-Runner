#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        int sum1,sum2,sum3;
        sum1=a*a;
        sum2=b*b;
        sum3=c*c;
        if((sum1+sum2)==sum3||(sum2+sum3)==sum1||(sum1*sum3)==sum2)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}