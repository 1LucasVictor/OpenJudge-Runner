#include<stdio.h>

int main(void){
    char s[4];
    int ans =1;
    int i;
    for(i=0;i<4;i++){
        scanf("%c",&s[i]);
    }
    for(i=0;i<4;i++){
        if(s[i]==s[i+1]){
            ans =0;
        }
    }
    if(ans==1){
        printf("Good");
    }else{
        printf("Bad");
    }

    return 0;
}