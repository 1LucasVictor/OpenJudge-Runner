#include <stdio.h>
#include <string.h>

int main(void){
    int i, count = 0;
    char S[20];
    char T[20];

    scanf("%s",S);
    scanf("%s",T);
    
    for(i = 0; i < strlen(S); i++){
        if(S[i] != T[i]){
            S[i] = T[i];
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}