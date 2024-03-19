#include <stdio.h>

int main(void){
    int i,j,k;
    int N,answer;
    char S[8];
   
    scanf("%s",S);
    
    for(i = 0;i < 3;i++){
        if(S[i] == S[i+1]){
            printf("Bad\n");
            return 0;
        }
    }
   
    printf("Good\n");
    return 0;
}
