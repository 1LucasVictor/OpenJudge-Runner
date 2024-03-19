#include <stdio.h>
int main(void)
{
 
    int n,i,j,x[4][13]={{0}},no,k;
    char cards;
    
    scanf("%d",&n);
     
     
 
    while(n>0)
    {
         
        scanf(" %c",&cards);
        scanf("%d",&no);
         
 
        if(cards =='S')
        {
            k=0;
 
             
             
        }
     
     
        if(cards =='H')
        {
            k=1;
 
             
             
        }
     
 
        if(cards =='C')
        {
            k=2;
 
             
             
        }
     
        if(cards =='D')
        {
            k=3;
 
             
             
        }
 
        x[k][no-1] =1;
        n--;
 
    }
     
    for(i=0;i<4;i++)
    {
         
         
 
        for(j=0;j<13;j++)
        {
            if(x[i][j] == 0)
            {
             
              
                if(i==0)
                {
                    cards = 'S';
                     
                }
 
                if(i==1)
                {
                    cards = 'H';
                     
                }
 
                if(i==2)
                {
                    cards = 'C';
                     
                }
                 
                if(i==3)
                {
                    cards = 'D';
                     
                }
 
                printf("%c %d\n",cards,j+1);
                 
             
         
        }
     
    }
 
    }
    return 0;
     
} 