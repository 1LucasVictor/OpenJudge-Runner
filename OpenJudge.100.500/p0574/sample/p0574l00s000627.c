#include <stdio.h>

int main(void){
    char S[5];
    if(scanf("%s",S)>0){
        if(S[0]==S[1]||S[1]==S[2]||S[2]==S[3]){
            printf("Bad");
        } else {
            printf("Good");
        }
    }
}
