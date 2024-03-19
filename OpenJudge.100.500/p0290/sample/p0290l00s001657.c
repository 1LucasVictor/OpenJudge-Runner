#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,j,t,m,k,count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&j);
            m=sqrt(j);
            k=1;
            for( t= 2; t<=m; t++)
                if(j%t==0)
                    k=0;
            if(k==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}

