#include<stdio.h>
int main(void)
{
    char c;
    int n,i,j,x,card[4][14];
    for(i=0;i<4;i++)
    {
        for(j=1;j<=13;j++)
        {
            card[i][j]=0;
        }
    }
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf(" %c %d",&c,&n);
        if(c=='S')
        {
            card[0][n] = 1;
        }
        else if(c=='H')
        {
            card[1][n] = 1;
        }
        else if(c=='C')
        {
            card[2][n] = 1;
        }
        else if(c=='D')
        {
            card[3][n] = 1;
        }
    }
    for(i=1;i<=13;i++)
    {
        if(card[0][i]!=1)
        {
            printf("S %d\n",i);
        }
    }
    for(i=1;i<=13;i++)
    {
        if(card[1][i]!=1)
        {
            printf("H %d\n",i);
        }
    }
    for(i=1;i<=13;i++)
    {
        if(card[2][i]!=1)
        {
            printf("C %d\n",i);
        }
    }
    for(i=1;i<=13;i++)
    {
        if(card[3][i]!=1)
        {
            printf("D %d\n",i);
        }
    }

    return 0;
}