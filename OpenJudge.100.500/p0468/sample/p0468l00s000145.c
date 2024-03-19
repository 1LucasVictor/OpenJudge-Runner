#include <stdio.h>

int main() {
    char S[3];
    int i;

    for(i = 0; i < 3; i++) {
        scanf("%c", &S[i]);
    }

    if(S[1] == 'B') {
        printf("ARC");
    } else {
        printf("ABC");
    }

    return 0;
}