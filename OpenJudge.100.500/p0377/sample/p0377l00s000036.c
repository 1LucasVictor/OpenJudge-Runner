#include <stdio.h>
int main(void)
{
    int n,card[4][13],i,j,number,gara;
    char ch,mark;
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<13;j++) card[i][j]=0;
    }
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&ch);
        scanf("%c %d",&mark,&number);
        
        if(mark=='S') gara=0;
        else if(mark=='H') gara=1;
        else if(mark=='C') gara=2;
        else if(mark=='D') gara=3;
        
        card[gara][number]=1;
    }
    
    for(i=0;i<4;i++)
    {
        for(j=1;j<=13;j++)
        {
            if(card[i][j]==0)
            {
                if(i==0) mark='S';
                else if(i==1) mark='H';
                else if(i==2) mark='C';
                else if(i==3) mark='D';
                
                printf("%c %d\n",mark,j);
            }
        }
    }
    
    return 0;
}
