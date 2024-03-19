#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    int i,j,k;
    char S[10];
    bool flag = false;
    
    scanf("%s",S);
    
    for(i = 0;i < 4;i++){
        flag = false;
        for(j = 0;j < 4;j++){
            if(S[i] == S[j] && i != j){
                flag = true;
            }
        }
        if(flag == false){
            printf("No\n");
            return 0;
        }
    }
    
    printf("Yes\n");
    return 0;
}

