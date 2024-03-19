#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a,b,i,sum=0;
    double d;

    scanf("%d %d",&n,&m);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);

        d = sqrt((a*a)+(b*b));

        if(d<=m) sum++;

        else continue;
    }

    printf("%d",sum);

return 0;
}
