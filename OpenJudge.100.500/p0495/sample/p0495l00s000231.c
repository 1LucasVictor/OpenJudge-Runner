#include <stdio.h>

int main(void) {
    char s[3];
    scanf("%s", s);
    if (s[0] == s[1]) {
        if (s[0] == s[2]) {
            printf("No\n");
        }
    } else {
        printf("Yes\n");
    }
    return 0;
}