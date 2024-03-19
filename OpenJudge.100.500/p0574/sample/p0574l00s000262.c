#include<stdio.h>

int main(void){
    
    char S[5],i;
    
    scanf("%s",S);

    for(i = 0;i < 4;i++){
        if(S[i] == S[i + 1]){
            printf("Bad");
            return 0;
        }
    }
    
    printf("Good");
    return 0;
}