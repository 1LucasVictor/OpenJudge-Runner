#include <stdio.h>
#include <string.h>

void main(){
    char S[200000];
    char T[200000];
    int count = 0;

    
    scanf("%s", S);
    scanf("%s", T);

    int n = strlen(S);

    for(int i = 0; i < n; i++){
        if(S[i] != T[i]){
            S[i] = T[i];
            count++;
        }
    }
    printf("%d\n", count);
}