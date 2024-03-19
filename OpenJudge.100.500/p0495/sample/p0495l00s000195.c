#include <stdio.h>

int main(void) {
    char s[3];
    scanf("%c", &s[0]);
    if ( s[0] != 'A' && s[0] != 'B' ) { return 0; }
    scanf("%c", &s[1]);
    if ( s[1] != 'A' && s[1] != 'B' ) { return 0; }
    scanf("%c", &s[2]);
    if ( s[2] != 'A' && s[2] != 'B' ) { return 0; }
    if (s[0] == s[1]) {
        if (s[0] == s[2]) {
            printf("No\n");
        }
    } else {
        printf("Yes\n");
    }
    return 0;
}
