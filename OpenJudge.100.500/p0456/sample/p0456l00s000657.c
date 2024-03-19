#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    size_t size = 2000000; 
    char S[size];
    char T[size];
    fgets(S, size, stdin);
    fgets(T, size, stdin);
    int rs = 0;
    for (int i=0; S[i] != '\0'; i++){
        if (S[i] != T[i]) ++rs;
    }
    printf("%d\n",rs);
    return 0;
}