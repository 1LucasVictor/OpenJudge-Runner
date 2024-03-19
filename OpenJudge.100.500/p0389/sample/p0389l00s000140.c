#include<stdio.h>
#include<stdlib.h>

 int main(){
    int i,j,m,h,k;
    char card[201],card1[201],card2[201];

    for(i=0;;i++){
       scanf("%s",&card);
       if(strcmp(card,"-")==0)break;

       scanf("%d",&m);
       for(j=0;j<m;j++){
            scanf("%d",&h);
            strcpy(card1,card);
            strcpy(card,card1+h);
            strncat(card,card1,h);
            }
       printf("%s\n",card);
       }
    return 0;
    }
