#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,b,c,sum=0,i;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        sum=sqrt((a*a)+(b*b));
        if(c==sum)
        {
            printf("YES\n");
        }
        else
        printf("NO\n");
    }

    return 0;
}