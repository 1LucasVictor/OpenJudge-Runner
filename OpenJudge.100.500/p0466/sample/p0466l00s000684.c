#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    char S[10],T[11];
    scanf("%s",S);
    scanf("%s",T);
    int S_len = strlen(S);
    int T_len = strlen(T);
    int diff = T_len - S_len;
    if(diff!=1){
        printf("No\n");
        return 0;
    } 

    for(i=0;i<S_len;i++){
        if(S[i]!=T[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}