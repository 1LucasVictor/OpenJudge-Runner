#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int s1[n],s2[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s1[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&s1[i]);
    }
    int tot=0;
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(tot<k)
        count++;
        {
        if(s1[i]>s2[i])
        {
            tot+=s2[i];
        }
        else
        {
            tot+=s1[i];
        }
    }
    }


    
    printf("%d",count);
    
    
    
    return 0;
}