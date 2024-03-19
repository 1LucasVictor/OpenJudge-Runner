#include "stdio.h"

int main(void)
{
    int x;
    int y;
    int turu=-1;
    int kame=-1;
    int flag=0;

    scanf("%d",&x);
    scanf("%d",&y);

    int i,j;
    for(i=0;i+j<=x;i++)
    {
        for(j=0;i+j<=x;j++)
        {
            if((i+j==x)&&(2*i+4*j==y))
            {
                flag =1;
            }
        }
    }
    if(flag =1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}