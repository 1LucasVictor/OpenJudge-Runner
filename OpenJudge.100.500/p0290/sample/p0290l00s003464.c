#include<stdio.h>
int main()
{
    int n,i,j,count,flag,a[10000];
    flag=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        count=0;
        for(i=0; i<n; i++)
        {
            for(j=2; j<a[i]; j++)
            {
                if(a[i]%j==0)
                    break;
            }

            if(a[i]==j)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

