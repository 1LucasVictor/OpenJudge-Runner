#include <stdio.h>

int main(void) {
    char S[10];
    scanf("%s", S);
    if (S[0]=='7' || S[1]=='7' || S[2]=='7') printf("Yes");
    else printf("No");
    return 0;
}