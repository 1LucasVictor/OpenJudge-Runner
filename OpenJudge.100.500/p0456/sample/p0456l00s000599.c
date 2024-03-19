#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    size_t size = 200000;
    char S[size];
    char T[size];
    int count = 0;

    
    fgets(S, size, stdin);
    fgets(T, size, stdin);

    int n = strlen(S);

    for(int i = 0; i < n; i++){
        if(S[i] != T[i]){
            count++;
        }
    }
    printf("%d\n", count);
}