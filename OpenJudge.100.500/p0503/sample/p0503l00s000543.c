#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j,m=0;;
    scanf("%d",&n);
    int num[n+5];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]==num[j])
            {
                m++;
            }
        }
        if(m>0)
            break;
    }
    if(m==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
