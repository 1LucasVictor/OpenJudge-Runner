#include<stdio.h>
#include<string.h>

#define ATOZ_CNT 26

int main(){
    char input[5];
    int  appear[ATOZ_CNT]={0,};
    scanf("%s",input);
    for(int i=0;i<4;i++){
        appear[input[i]-'A']+=1;
    }
    int doubleAppearCnt=0;
    for(int i=0;i<ATOZ_CNT;i++){
        if(appear[i]==2)doubleAppearCnt+=1;
    }
    if(doubleAppearCnt==2)printf("Yes\n");
    else                  printf("No\n");
    
    return 0;
}