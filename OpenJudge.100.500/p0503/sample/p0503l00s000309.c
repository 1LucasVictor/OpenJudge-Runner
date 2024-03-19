#include <stdio.h>
#include <stdlib.h>

int a[200005];
int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=i+1;
        for(;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("NO");
                flag=1;
                return 0;
            }
        }
    }
    if(flag==0)
        printf("YES");
    return 0;
}