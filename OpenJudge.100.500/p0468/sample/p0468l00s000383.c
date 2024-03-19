#include <stdio.h>

int main() {
    int x = 0;

    char S[9];
    scanf("%s", S);
    
    if (S[1] == 'B') {
        S[1] = 'R';
    } else {
        S[1] = 'B';
    }
    
    printf("%s\n", S);
    return 0;
}