#include <stdio.h>
#include <string.h>

int main(void) {
    char S[4];
    char ABC[4] = "ABC";
    char ARC[4] = "ARC";

    scanf("%s", S, 4);
    if (!strcmp(S, "ARC")){
        printf("ABC");
    }
    else {
        printf("ARC");
    }
    return 0;
}