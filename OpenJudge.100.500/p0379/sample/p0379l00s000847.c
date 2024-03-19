#include <stdio.h>
int main(void)
{
    int n,m,t,i,j;
 
    scanf("%d %d",&n,&m);
     
    int a[100][100],b[100],ans[100];
 
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 
 
 
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
 
    for(i=0;i<n;i++)
    {
        t = 0;
         
        for(j=0;j<m;j++)
        {
            t = t + (a[i][j]*b[j]);
             
        }
 
        ans[i] = t;
         
    }
 
    for(i=0;i<n;i++)
    {
        printf("%d\n",ans[i]);
    }
 
 
     
    return 0;
 
}