#include <stdio.h>
int main(void)
{
    int n,i,j,a,card[4][13];
    char c,mark[4]={'S','H','C','D'};
    scanf("%d",&n);
    for(i=0;i<4;i++)
    {
        for(j=0;j<13;j++)
        {
            card[i][j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        scanf(" %c %d",&c,&a);
        if(c=='S') card[0][a-1]=1;
        if(c=='H') card[1][a-1]=1;
        if(c=='C') card[2][a-1]=1;
        if(c=='D') card[3][a-1]=1;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<13;j++)
        {
            if(card[i][j]==0)
            {
                printf("%c %d\n",mark[i],j+1);
            }
        }
    }
    return 0;
}
