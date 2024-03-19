#include<stdio.h>
int main()
{

    int a,b,sum1=0,sum2=0,sum3=0;

    scanf("%d %d",&a,&b);
    sum1=a+b;
    sum2=a-b;
    sum3=a*b;
    if(sum1>sum2&&sum1>sum3)
    {
     printf("%d\n",sum1);

    }
 else if(sum2>sum1&&sum2>sum3)
{
printf("%d\n",sum2);
}
else{
printf("%d\n",sum3);
}

return 0;
}
