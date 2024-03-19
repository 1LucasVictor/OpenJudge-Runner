#include <stdio.h>

int main(void) {
    char S[3];
    scanf("%s", S);

    for(int i = 1; i < 3; i++) {
        if(S[i] != S[i - 1]) {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");

    return 0;
}