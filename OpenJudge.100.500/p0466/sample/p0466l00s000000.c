#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    char S[9];
    scanf("%s",S);

    int S_len = strlen(S);
    int T_len = S_len + 1;

    char T[T_len];
    scanf("%s",T);

    for(i=0;i<S_len;i++){
        if(S[i]!=T[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}