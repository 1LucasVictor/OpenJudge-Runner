#include<stdio.h>
#define N 101
int main()
{
    int num[N],i,j,n,t;
    while(scanf("%d",&n)!=EOF)
    {
        int s=0;
        for(i=1; i<=n; i++)
            scanf("%d",&num[i]);
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(num[i]>num[j])
                {
                    t=num[i];
                    num[i]=num[j];
                    num[j]=t;
                    s++;
                }
            }
        }
        for(i=1; i<n; i++)
            printf("%d ",num[i]);
        printf("%d\n",num[n]);
        printf("%d\n",s);
    }
}

