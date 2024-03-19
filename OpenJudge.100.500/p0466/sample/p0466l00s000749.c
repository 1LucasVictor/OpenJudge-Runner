#include<stdio.h>
#include<string.h>

int main(void){
    char S[264], T[264];
    int j = 0;
    scanf("%s",&S);
    scanf("%s",&T);
    if(strlen(S)+1 == strlen(T)){
        if(strlen(S) == 1){
            if(S[0] == T[0]){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else{
            for(int i = 0; i < strlen(S); i++){
                if(S[i] != T[i]){
                  j++;  
                }
            }
            if(j == 0){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
    else{
        printf("No\n");
    }
    return 0;
}