#include "stdio.h"

int main(void)
{
    int N;
    scanf("%d",&N);
    int i,j;
    int a[N];

    a[0]=0;
    for(i=1;i<N;i++)
    {
        scanf("%d",&a[i]); 
    }

    int kazu[N+1];
    for(i=0;i<=N;i++)
    {
        kazu[i]=0;
    }

    for(i=1;i<N;i++)
    {
        for(j=1;j<N;j++)
        {
            if(a[j]==i)
            {
                kazu[i]++;
            }
        }
    }

    for(i=1;i<=N;i++)
    {
        printf("%d\n",kazu[i]);
    }
    return 0;
}