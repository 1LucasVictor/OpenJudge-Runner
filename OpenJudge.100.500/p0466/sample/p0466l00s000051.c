#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char s[11];
    char t[11];

    scanf("%s%s", s, t);

    int isCheck = 1;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != t[i]) {
            isCheck = 0;
            break;
        }
    }

    printf("%s", (isCheck == 1 ? "Yes" : "No"));

    return 0;

}
