#include <stdio.h>
#include <ctype.h>
#define rep(i,n) for ((i)=0; (i)<(n); (i)++)

int main(void) {
    char S[1200];
    int i = 0;
    scanf("%[^\n]", S);

    while(S[i] != 0) {
        if ('A' <= S[i] && S[i] <= 'Z') {
           S[i] = tolower(S[i]);
        } else if ('a' <= S[i] && S[i] <= 'z') {
            S[i] = toupper(S[i]);
        }
        i++;
    }
    i = 0;
    while(S[i] != 0) {
        printf("%c", S[i]);
        i++;
    }
    printf("\n");
    return 0;
}
