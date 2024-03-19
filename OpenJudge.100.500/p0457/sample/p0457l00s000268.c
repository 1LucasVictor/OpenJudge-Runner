#include<stdio.h>
int main()
{
    int N,M,K;
    scanf("%d%d%d",&N,&M,&K);
    int a[N],b[M];

    int s,t;

    for(s=0;s<N;s++)
    {
        scanf("%d",&a[s]);
    }

    for(t=0;t<M;t++)
    {
        scanf("%d",&b[t]);
    }
    
    int T=0,C=0;
    s=0;
    t=0;
    while(T<=K)
    {
        if(a[s]<=b[t])
        {
            T+=a[s];
          	if(T>K) break;
            s+=1;
            C+=1;
        }
        else
        {
            T+=b[t];
          	if(T>K) break;
            t+=1;
            C+=1;
        }
    }
    printf("%d",C);

    return 0;
}