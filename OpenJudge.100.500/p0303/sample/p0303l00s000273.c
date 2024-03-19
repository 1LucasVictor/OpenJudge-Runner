#include<stdio.h>
int n,k,w[200000];
int bs(int a)
{
    int i,t = 0,c = 1;
    for(i = 0;i < n;i++)
    {
        if(w[i] > a) return 0;
        if(t+w[i] > a)
        {
            c++;
            t=0;
        }
        t += w[i];
    }
    return c<=k;
}

int main()
{
    int i,j,r,m;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&w[i]);
    for(j=0,r=2147483647;j<r;)
    {
        m=(j+r)/2;
        if(bs(m))
            r = m;
        else
            j = m+1;
    }
    printf("%d\n",r);
    return 0;
}
