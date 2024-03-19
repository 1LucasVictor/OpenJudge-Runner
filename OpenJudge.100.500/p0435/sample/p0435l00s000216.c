#include <stdio.h>

int main(void)
{
        int n,d,i,c=0;
        scanf("%d%d",&n,&d);
        int x[n],y[n];
        for(i=0;i<n;i++)
                scanf("%d%d",&x[i],&y[i]);

        for(i=0;i<n;i++)
                if(x[i]*x[i]+y[i]*y[i]<=d*d)c++;
        printf("%d\n",c);
        return 0;
}
