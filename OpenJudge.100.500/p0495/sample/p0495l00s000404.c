#include<stdio.h>

int main(void){
    char words[2];
    //iがAの時はA,Bの時はBが管理
    //区間間が違う会社の時はバス
    scanf("%s",words);
    if(words[0]==words[1] && words[1]==words[2]){
        printf("No");
    }else{
        printf("Yes");
    }

    return 0;
}