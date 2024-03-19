#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,k,x=0;
    while(scanf("%d",&n)!=EOF)
    {
        x=0;
        while(n--)
        {
            scanf("%d",&m);
            k=sqrt(m);
            for(i=2; i<=k; i++)
                if(m%i==0)
                    break;
            if(i>=k+1)
                x++;
        }
        printf("%d\n",x);
    }
    return 0;
}

