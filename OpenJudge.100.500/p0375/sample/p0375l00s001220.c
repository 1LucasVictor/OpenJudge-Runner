#include <stdio.h>
int main(void)
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0) printf(" %d",i);
        else
        {
           for(j=1;j<=5;j++)
           {
               if(i%(10*j)==3)
               {
                   printf(" %d",i); break;
               }
            }
        }
    }
    
    printf("\n");
    return 0;
}
