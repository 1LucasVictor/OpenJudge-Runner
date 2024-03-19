#include "stdio.h"

int main(void)
{
    int i,n;
    int m = 0;
    scanf("%d",&n);
    int v[n];
    int c[n];
    int a = 0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        if(v[i]%2 == 0)
        {
            c[m] = v[i];
            m++;
        }
    }
    for(i = 0;i < m;i++)
    {
        if(c[i]%3 == 0 || c[i]%5 == 0)
        {}
        else
        {
            a = 1;
        }   
    }
    if(a == 1)
    {
        printf("DENIED");
    }
    else if(a == 0)
    {
        printf("APPROVED");
    }
}