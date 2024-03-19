#include<stdio.h>

int main(void){
    char S[4];
    scanf("%s",S);
    for(int i=1;i<4;i++){
        if(S[i]==S[i-1]){
            printf("Bad");
            return 0;
        }
    }
    printf("Good");
    return 0;
}