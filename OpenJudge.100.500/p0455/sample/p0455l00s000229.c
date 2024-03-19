#include<stdio.h>
#include<math.h>
int main()
{
    double n,i,sum=0;
    scanf("%lf",&n);
    for(i=1;i<=3;i++)
    {
        sum=sum+pow(n,i);

    }

    printf("%.0lf\n",sum);

    return 0;
}
