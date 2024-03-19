#include <stdio.h>

#define LEN 4

int isCollect(char s[LEN]);

int main(void) {

    char s[LEN];
    scanf("%s", s);

    if ( isCollect(s) ) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}

int isCollect(char s[LEN]) {
    if ( s[0] == s[1] ) {
        return s[2] == s[3] && s[0] != s[2];
    } else if ( s[0] == s[2] ) {
        return s[1] == s[3] && s[0] != s[1];
    } else if ( s[0] == s[3] ) {
        return s[1] == s[2] && s[0] != s[1];
    } else {
        return 0;
    }
}