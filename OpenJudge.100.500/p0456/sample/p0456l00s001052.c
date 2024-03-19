#include <stdio.h>

int main(void){
    char S[199999];
    char T[199999];
    int result = 0;
    int unused1 __attribute__((unused));
    int unused2 __attribute__((unused));
    unused1 = scanf("%s",S);
    unused2 = scanf("%s",T);
    for(int i = 0; S[i] != '\0'; i++){
        if(S[i] != T[i]){
            S[i] = T[i];
            result++;
        }
    }
    printf("%d\n", result);
    return 0;
}