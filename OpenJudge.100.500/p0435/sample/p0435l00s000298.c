#include <stdio.h>
#include <math.h>

int main()
{
    int j,n,d;scanf("%d",&n);scanf("%d",&d);int count=0;float p,x[n][2];
    for(j=0;j<n;j++)
    {
        scanf("%f",&x[j][0]);scanf("%f",&x[j][1]);
    }
    for(j=0;j<n;j++)
    {
        p=((x[j][0]*x[j][0])+(x[j][1]*x[j][1]));
        if(p<=(d*d))
            count++;
    }
    printf("%d\n",count);
    return 0;
}
