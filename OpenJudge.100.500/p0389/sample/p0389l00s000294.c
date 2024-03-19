#include<stdio.h>
int main()
{
    int i,j,n,h;
    char card[200],copy[200];

    while(1)
    {
        scanf("%s",&card);
        if(card[0]=='-')break;  
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&h);
            for(i=0;i<h;i++)
            {
                copy[i]=card[i];
            }
            for(j=0;i<strlen(card);i++,j++)
            {
                card[j]=card[i];
            }
            for(i=0;i<h;i++,j++)
            {
                card[j]=copy[i];
            }
        }
        printf("%s\n",card);
    }
}

