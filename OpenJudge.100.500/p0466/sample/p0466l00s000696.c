#include <stdio.h>
#include <string.h>

int main(void){
    int i,cntS,cntT,flg1=1,flg2=0;
    char S[10],T[11];
    scanf("%s",S);
    scanf("%s",T);
    for(cntS=0;S[cntS]!='\0';++cntS);
    for(cntT=0;T[cntT]!='\0';++cntT);
    for(i=0;i<cntS;i++){
        if(S[i] != T[i]){
            flg1 = 0;
            break;
        }
    }
    if(cntS+1 == cntT){
        flg2 = 1;
    }
    if(flg1 == 1 && flg2 == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}