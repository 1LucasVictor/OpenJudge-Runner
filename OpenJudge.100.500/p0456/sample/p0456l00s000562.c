#include <stdio.h>
#include <string.h>

int main(void) {
    char S[16];
    char T[16];
    scanf("%s", S);
    scanf("%s", T);

    int count = 0;
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] != T[i]) {
            S[i] = T[i];
            count++;
        }
    }
    
    printf("%d\n", count);
}