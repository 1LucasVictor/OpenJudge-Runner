#include <stdio.h>
#include <string.h>
int main(void)
{
    char cards[201],str[500]={},shuffled[201];
    int m,h,i,j;
    
    while(1)
    {
       scanf("%s",cards);
       if(cards[0]=='-') break;
       else
       {
           scanf("%d",&m);
           for(i=0;i<m;i++)
           {
               scanf("%d",&h);
               strcpy(str,cards); strcat(str,cards);
               for(j=0;j<strlen(cards);j++)
               {
                   shuffled[j]=str[j+h];
               }
               shuffled[strlen(cards)]='\0';
               strcpy(cards,shuffled);
           } 
           
       }
       printf("%s\n",shuffled);
    }
    return 0;
}
