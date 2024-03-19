#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    char card1[200]={};
    int i=0,j=0,k=0,number=0,m,length;

    while(scanf("%s",card1)==1){
            if(strcmp(card1,"-")==0){
             exit(0);
         }
        length=strlen(card1);
        scanf("%d",&number);//シャッフル回数
    while(scanf("%d",&m)==1){
        if(k==number){break;}
        k++;
        char card2[200]={};
        strncpy(card2,card1,m);
        
        for(i=0,j=m;i<=length;i++,j++){
            card1[i]=card1[j];
        }
        strcat(card1,card2);
    }
    printf("%s\n", card1);
    i=0;j=0;k=0;
    }
    return 0;
}
