#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i,sum=0;
    double z,x,y,d;
    scanf("%d %lf",&n,&d);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf",&x,&y);
        z=sqrt((x*x+y*y));
        if(z<=d)
            sum++;
    }
    printf("%d",sum);
    return 0;
}
