#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int s[m],c[m];
    for(int i=0;i<m;i++)
        scanf("%d %d",&s[i],&c[i]);
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=0;
        for(int j=0;j<m;j++)
        {
            if(s[j]==i+1)
            {
                if(a[i]!=0)
                {
                    if(c[j]<a[i])
                        a[i]=c[j];
                }
                else
                    a[i]=c[j];
            }
        }
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        k=(k*10)+a[i];
    }
    int d=1+(int)log10(k);
    if(d==n && k>0)
        printf("%d",k);
    else
        printf("-1");
    return 0;
}
