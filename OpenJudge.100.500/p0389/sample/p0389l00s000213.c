#include <stdio.h>
#include <string.h>
 
int main(void){
   char cards[201],sub[200];
   int i,m,h,len;
    
   while(scanf("%s",cards),strcmp(cards,"-")){
       scanf("%d",&m);
       len=strlen(cards);
       for(i=0;i<m;i++) {
           scanf("%d",&h);
           strcpy(sub,&cards[h]);
           strcat(sub,cards);
           sub[len]='\0';
           strcpy(cards,sub);
       }
       printf("%s\n",cards);
   }
    
    return 0;
}
