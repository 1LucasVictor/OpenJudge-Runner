#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={0},k,i,j,t=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
            if(a[j]-a[i]<k)
           {
               t=0;
           }
        else
           {
              t=1;
              break;
           }
           if(t==1)
              break;
    }
    if(t==0)
        printf("Yay!\n");
    else if(t==1)
        printf(":(\n");
    return 0;
}