#include<stdio.h>
int main()
{
    int n,i,t,j,k;
    int s[101];
    while(scanf("%d",&n)!=EOF)
    {
        k=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i]>s[j])
                {
                    t=s[i];
                    s[i]=s[j];
                    s[j]=t;
                    k++;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            printf("%d ",s[i]);
        }
        printf("%d",s[n-1]);
        printf("\n");
        printf("%d\n",k);
    }
    return 0;
}

