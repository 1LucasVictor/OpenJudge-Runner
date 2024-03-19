#include<stdio.h>

int main(void){
    
    char S[5],Moji_Shurui = 0,i;

    scanf("%s",S);

    for(i = 0 ;i < 4;i++){
        if(S[i] != S[0]){
            Moji_Shurui++;
        }
    }

    //printf("%d\n",Moji_Shurui);

    if(Moji_Shurui == 2){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}