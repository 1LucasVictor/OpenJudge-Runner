#include<stdio.h>
int main()
{
    int a=0,b=0,j,i,k,l,m[30],n;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            m[a]=i;
            a++;
        }
    }
    for(i=0;i<a;i++)
    {
        if(m[i]>=10)
        {
            b++;
            printf("No\n");
            break;
        }
    }
    if(b==0)
    {
        printf("Yes\n");
    }
    return 0;
}
