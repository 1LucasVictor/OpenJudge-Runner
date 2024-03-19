#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int doll[200000]={};
    int i;

    for(i=0;i<n;i++)
    {
        scanf("%d",&doll[i]);
    }

    int j,max=-1;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(doll[j]-doll[i]>max)
            {
                max=doll[j]-doll[i];
            }
        }
    }
    printf("%d",max);

    return 0;
}